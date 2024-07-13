def leaders(arr):
    leaders = [arr[i] for i in range(len(arr) - 1, -1, -1) if i == len(arr) - 1 or arr[i] >= max(arr[i + 1:])]
    return leaders