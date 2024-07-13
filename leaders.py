def leaders(arr):
    return [x for i, x in enumerate(reversed(arr)) if all(y <= x for y in arr[i + 1 :])]