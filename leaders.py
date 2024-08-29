def leaders(arr):
    n = len(arr)
    leader = []

    for i in range(n - 1, -1, -1):
        leader.append(arr[i])
        while i > 0 and arr[i] >= arr[i + 1]:
            i -= 1

    return leader[::-1]