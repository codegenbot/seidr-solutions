def leaders(arr):
    return [max(arr[i:]) for i in range(len(arr) - 1, -1, -1)]