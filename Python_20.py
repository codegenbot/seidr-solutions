def find_closest_elements(arr, target):
    left = 0
    right = len(arr) - 1

    while True:
        if arr[left] == target:
            return [arr[left]]
        elif arr[right] == target:
            return [arr[right]]

        mid = (left + right) // 2

        if abs(arr[mid] - target) < abs(arr[left] - target):
            left = mid
        elif abs(arr[mid] - target) > abs(arr[right] - target):
            right = mid
        else:
            return (
                [arr[mid], arr[left + 1]]
                if arr[mid] < target
                else [arr[mid - 1], arr[mid]]
            )


def check(find_closest_elements):
    arr = [1, 2, 3, 4, 5]
    target = 2.5
    print(find_closest_elements(arr, target))


check(find_closest_elements)