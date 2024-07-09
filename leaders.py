def leaders(arr):
    leaders = [arr[-1]]
    max_right = arr[-1]
    
    for num in arr[:-1]:
        if num >= max_right:
            leaders.append(num)
            max_right = num
            
    return leaders