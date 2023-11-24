def find_leaders(arr):
    if not arr:
        return [arr[-1]]
    leaders = [arr[-1]]
    max_right = arr[-1]
    for i in range(len(arr) - 2, -1, -1):
        max_right = max(max_right, arr[i])
        leaders.insert(0, max_right)
    return leaders