def leaders(arr):
    leaders = []
    max_right = arr[-1]
    for i in range(len(arr) - 1, -1, -1):
        if max_right <= arr[i]:
            leaders.append(arr[i])
        max_right = max(arr[:i+1])
    return leaders[::-1]