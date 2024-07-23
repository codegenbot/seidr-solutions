def leaders(arr):
    leader = max(arr)
    return [leader] + [i for i in arr[:-1][::-1] if i >= leader]