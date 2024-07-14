def leaders(arr):
    n = len(arr)
    leaders = [arr[n-1]]

    for i in range(n-2, -1, -1):
        leaders.append(arr[i] if arr[i] >= leaders[0] else leaders[0])

    return leaders[::-1]