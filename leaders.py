```Python
def leaders(arr):
    n = len(arr)
    max_right = arr[n-1]
    result = [max_right]
    
    for i in range(n-2, -1, -1):
        if arr[i] >= max_right:
            result.insert(0, arr[i])
            max_right = arr[i]
            
    return result