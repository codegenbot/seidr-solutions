def leaders(arr):
    leader = arr[-1]
    leaders = [leader]
    for num in arr[:-1][::-1]:
        if num >= leader:
            leader = num
            leaders.insert(0, leader)
    return leaders