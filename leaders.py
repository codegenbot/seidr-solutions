def leaders(arr):
    n = len(arr)
    leader = arr[n - 1]
    leaders_list = [leader]

    for i in range(n-1, 0, -1):
        if arr[i-1] >= leader:
            leader = arr[i-1]
            leaders_list.insert(0, leader)

    return leaders_list