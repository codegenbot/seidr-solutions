def leaders(arr):
    n = len(arr)
    leader = arr[n - 1]
    leaders_list = [leader]

    for i in range(n - 2, -1, -1):
        if arr[i] >= leader:
            leader = arr[i]
            leaders_list.insert(0, leader)

    return leaders_list