def find_leaders(arr):
    leaders = []
    max_right = float('-inf')
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= max_right:
            leaders.append(arr[i])
            max_right = arr[i]
    return leaders