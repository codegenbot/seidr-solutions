def find_closest_elements(arr, target):
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

    # find the closest elements
    if abs(target - arr[left]) <= abs(target - arr[right]):
        return [arr[left], arr[left]]
    else:
        return [arr[right], arr[right]]


def check(func):
    print(func([1, 2, 3, 4, 5], 3.8))

check(find_closest_elements)