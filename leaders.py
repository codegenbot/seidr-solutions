def get_leaders(arr):
    leaders = []
    for i in range(len(arr)-1, -1, -1):
        if arr[i] >= arr[i+1]:
            leaders.append(arr[i])
    return leaders