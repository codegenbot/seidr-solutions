def leaders(arr):
    result = [arr[i] for i in range(len(arr)-1, -1, -1)]
    return result