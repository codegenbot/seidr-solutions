def find_closest_elements(arr, target=0):
    arr.sort()
    left = 0
    right = len(arr) - 1

    while True:
        if left == right:
            return [arr[left], arr[left]]

        if target < (right - left) * arr[left] + arr[right]:
            right = left + (right - left) // 2
        else:
            left = right - (right - left) // 2 + 1

    return [arr[left], arr[right]]