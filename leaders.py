def leaders(arr):
    leaders_list = []
    max_seen = arr[-1]
    
    for num in reversed(arr[:-1]):
        if num >= max_seen:
            leaders_list.append(max_seen)
            max_seen = num
    
    return [max_seen] + leaders_list[::-1]