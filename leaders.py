def find_leaders(arr):
    leaders = []
    max_leader = float('-inf')
    for num in arr[::-1]:
        if num >= max_leader:
            max_leader = num
            leaders.append(max_leader)
    return leaders[::-1]