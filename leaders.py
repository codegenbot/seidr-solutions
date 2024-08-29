def leaders(arr):
    return [x for i, x in reversed(list(enumerate(arr))) if all(y <= x for y in arr[:i]) and all(x >= y for y in arr[i + 1 :])]