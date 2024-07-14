```
def leaders(arr):
    leaders_list = []
    
    for i in range(len(arr)-1, -1, -1):
        if i == len(arr)-1 or arr[i] >= max(arr[i+1:]):
            leaders_list.append(arr[i])
            
    return list(reversed(leaders_list))