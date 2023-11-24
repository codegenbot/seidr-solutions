def find_leaders(arr):
    leaders = [arr[-1]]
    max_right = float('-inf')
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= max_right:
            leaders.insert(0, arr[i])
            max_right = arr[i]
    return leaders