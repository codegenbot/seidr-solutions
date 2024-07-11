def find_closest_elements(arr):
    arr.sort()
    if len(arr) == 1:
        return [arr[0]]
    for i in range(1, len(arr)):
        if (i == 1 or arr[i - 1] <= arr[i]) and (i == len(arr) - 1 or arr[i + 1] <= arr[i]):
            return [arr[i - 1], arr[i]]