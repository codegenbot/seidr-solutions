def find_leaders(arr):
    if len(arr) == 1:
        return arr
    leaders = [arr[-1]]
    max_right = arr[-1]
    for i in range(len(arr) - 1, -1, -1):
        max_right = max(max_right, arr[i])
        leaders.insert(0, max_right)
    return leaders