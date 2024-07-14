def leaders(arr):
    leaders_list = []
    max_right = arr[0]
    
    for num in arr:
        if num >= max_right:
            leaders_list.append(max_right)
            max_right = num
            
    leaders_list.append(max_right)
    return leaders_list