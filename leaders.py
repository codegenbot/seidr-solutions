def leaders(arr):
    n = len(arr)
    leaders_vector = [arr[n - 1]]

    for i in range(n - 2, -1, -1):
        if arr[i] >= arr[i + 1]:
            leaders_vector.append(arr[i])

    return reversed(leaders_vector)