```
def leaders(arr):
    n = len(arr)
    leaders_list = [arr[n-1]]
    
    for i in range(n-2, -1, -1):
        if arr[i] >= max(arr[i+1:]):
            leaders_list.append(arr[i])
        elif arr[i] < leaders_list[0]:
            leaders_list.pop(0)

    return leaders_list