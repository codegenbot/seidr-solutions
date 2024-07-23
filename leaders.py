def leaders(arr):
    max_leader = arr[-1]
    leaders = [max_leader]
    for num in arr[:-1][::-1]:
        if num >= max_leader:
            max_leader = num
            leaders.append(max_leader)
    return leaders[::-1]