def leaders(arr):
    max_right = arr[-1]
    leaders_list = [max_right]
    
    for num in arr[:-1][::-1]:
        if num >= max_right:
            max_right = num
            leaders_list.insert(0, max_right)
    
    return leaders_list