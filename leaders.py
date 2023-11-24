def find_leaders(arr):
    if not all(isinstance(x, int) and x >= 0 for x in arr):
        return []

    leaders = [arr[-1]]
    for i in range(len(arr) - 1, -1, -1):
        if arr[i] >= leaders[-1]:
            leaders.append(arr[i])

    return leaders[::-1]