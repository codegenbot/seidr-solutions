def leaders(arr):
    leaders_vector = [arr[-1]]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= arr[i + 1]:
            leaders_vector.append(arr[i])
    return leaders_vector[::-1]