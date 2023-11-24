def find_leaders(arr):
    leaders = [arr[-1]]
    max_right = arr[-1]
    for i in range(len(arr)-2, -1, -1):
        if arr[i] >= max_right:
            max_right = arr[i]
            leaders.append(max_right)
    return leaders[::-1]