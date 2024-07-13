def leaders(arr):
    n = len(arr)
    max_so_far = arr[n - 1]
    leaders = [max_so_far]
    for i in range(n-2, -1, -1):
        if arr[i] >= max_so_far:
            while not (arr[i] >= leaders[-1]):
                leaders.pop()
            leaders.append(arr[i])
            max_so_far = arr[i]
    return leaders