Here is the completed code:

def leaders(arr):
    if not arr:
        return []
    
    leaders = [arr[-1]]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= arr[-1]:
            leaders.append(arr[i])
            arr[-1] = arr[i]
    return leaders[::-1]