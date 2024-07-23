def leaders(arr):
    max_seen = arr[-1]
    leader = [max_seen]
    
    for num in reversed(arr[:-1]):
        if num >= max_seen:
            leader.insert(0, num)
            max_seen = num
    
    return leader