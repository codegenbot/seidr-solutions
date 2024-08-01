def leaders(arr):
    return [x for x in arr[::-1] if all(x >= y for y in arr[arr.index(x) + 1 :])]