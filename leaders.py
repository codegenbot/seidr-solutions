def get_leaders(arr):
    leaders = []
    for i in range(len(arr)):
        if arr[i] >= max(arr[i+1:]):
            leaders.append(arr[i])
    return leaders