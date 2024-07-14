```
def leaders(arr):
    leader = arr[-1]
    leaders_list = [leader]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= leader:
            leader = arr[i]
            leaders_list.insert(0, leader)
    return leaders_list