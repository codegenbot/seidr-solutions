def leaders(arr):
    leader = [arr[i] for i in range(len(arr)-1, -1, -1) if all(x <= arr[i] for x in arr[i+1:])]
    return leader