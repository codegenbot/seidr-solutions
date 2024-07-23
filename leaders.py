def leaders(arr):
    leaders_list = [arr[-1]]
    
    for num in reversed(arr[:-1]):
        if num >= leaders_list[0]:
            leaders_list.insert(0, num)
    
    return leaders_list