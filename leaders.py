def leaders(arr):
    return [max(arr[i:]) for i in range(len(arr))]