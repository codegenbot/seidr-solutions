```Python
def leaders(arr):
    max_seen = arr[-1]
    leaders_list = [max_seen]
    
    for num in reversed(arr[:-1]):
        if num >= max_seen:
            leaders_list.append(num)
            max_seen = num
    
    return list(reversed(leaders_list))