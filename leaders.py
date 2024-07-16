def leaders(arr):
    leaders = [arr[-1]]
    
    for num in arr[:-1][::-1]:
        if num >= leaders[-1]:
            leaders.insert(0, num)
            
    return leaders