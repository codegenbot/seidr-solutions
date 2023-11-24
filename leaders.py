def find_leaders(arr):
    if not arr:
        return []
    leaders = [arr[-1]]
    max_right = arr[-1]
    for i in range(len(arr) - 1, -1, -1):
        if arr[i] >= max_right:
            max_right = arr[i]
            leaders.append(max_right)
    return leaders[::-1]