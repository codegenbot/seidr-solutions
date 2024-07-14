def leaders(arr):
    n = len(arr)
    leaders = [arr[n - 1]]

    for i in range(n - 2, -1, -1):
        leaders.insert(0, arr[i] if any(x < arr[i] for x in arr[i+1:]) else leaders[-1])

    return leaders