def find_leaders(arr):
    leaders = []
    max_right = float('-inf')
    for i in range(len(arr) - 1):
        if arr[i] >= max_right:
            leaders.append(arr[i])
            max_right = arr[i]
    leaders.append(arr[-1]) 
    return leaders