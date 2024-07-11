def find_closest_elements(arr, num):
    arr.sort()
    if len(arr) == 1:
        return arr[0]
    if num < arr[0]:
        return arr[0]
    for i in range(1, len(arr)):
        if num > arr[i] and (i == len(arr) - 1 or num < arr[i + 1]):
            return arr[i - 1], arr[i]