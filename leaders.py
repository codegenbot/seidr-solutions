def find_leaders(arr):
    leaders = []
    for i in range(1, len(arr)):
        if arr[i] >= arr[-1]:
            leaders.insert(0, arr[i])
    return leaders