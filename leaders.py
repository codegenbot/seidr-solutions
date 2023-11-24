def find_leaders(arr):
    if not arr or not all(isinstance(x, int) and x > 0 for x in arr):
        return []

    leaders = [arr[-1]]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] > max(leaders):
            leaders.append(arr[i])

    if arr[0] >= max(leaders):
        leaders.append(arr[0])

    return leaders[::-1]