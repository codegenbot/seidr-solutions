def find_closest_elements(arr, target):
    arr.sort()
    left = 0
    right = len(arr) - 1

    while True:
        if left == right:
            return [arr[left], arr[left]]

        if target < (right - left) * arr[left] + arr[right]:
            right = (left + right) // 2
        else:
            left = right + 1

    return (
        [arr[left - 1], arr[left]]
        if target - arr[left - 1] <= arr[left] - target
        else [arr[left], arr[left + 1]]
    )