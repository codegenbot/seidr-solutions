def get_closest_elements(arr, target):
    arr.sort()
    left = 0
    right = len(arr) - 1

    while left <= right:
        mid = (left + right) // 2

        if arr[mid] == target:
            return [arr[mid], arr[mid]]

        if arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

        closest_pair = []
        if abs(arr[left] - target) < abs(arr[right] - target):
            closest_pair = [arr[left], arr[left]]
        else:
            closest_pair = [arr[right], arr[right]]

    return closest_pair


def check(func):
    print(func([1, 2, 3, 4, 5], 3.8))