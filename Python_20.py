def find_closest_elements(arr, target):
    arr.sort()
    left = 0
    right = len(arr) - 1

    while True:
        if abs(target - arr[left]) <= abs(target - arr[right]):
            return [arr[left], arr[right]]

        left += 1