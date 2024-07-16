def leaders(arr):
    max_right = arr[-1]
    leaders = [max_right]
    
    for num in arr[:-1][::-1]:
        if num >= max_right:
            max_right = num
            leaders.append(max_right)
    
    return leaders[::-1]