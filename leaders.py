def leaders(arr):
    n = len(arr)
    leaders_list = []

    for i in range(n-1, -1, -1):
        if i == n-1 or arr[i] >= max(arr[i+1:n]):
            leaders_list.append(arr[i])

    return list(reversed(leaders_list))