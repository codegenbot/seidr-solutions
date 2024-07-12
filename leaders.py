def leaders(arr):
    return [i for i in reversed(arr) if all(i >= j for j in arr[arr.index(i) + 1 :])]