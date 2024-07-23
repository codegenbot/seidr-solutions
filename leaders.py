def leaders(arr):
    leaders_list = []
    
    max_seen = arr[-1]
    for num in reversed(range(len(arr)-1)):
        if arr[num] >= max_seen:
            leaders_list.append(arr[num])
            max_seen = arr[num]
    
    return list(reversed(leaders_list))