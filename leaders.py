def leaders(arr):
    leaders_list = [arr[-1]]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= arr[i + 1]:
            leaders_list.append(arr[i])
    return reversed(leaders_list)