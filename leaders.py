Here is the completed code:

def leaders(arr):
    n = len(arr)
    result = []
    
    for i in range(n-1, -1, -1):
        result.append(arr[i])
        if all(x <= arr[i] for x in arr[:i]):
            pass
        else:
            break
            
    return result