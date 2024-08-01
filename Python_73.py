```
def smallest_change(arr):
    n = len(arr)
    arr = [str(x) for x in arr]
    res = float('inf')
    
    for i in range(n):
        left = arr[:i]
        right = arr[i+1:]
        mid = arr[i]
        
        if ''.join(left + right[::-1]) == ''.join(arr):
            res = min(res, 1)
        else:
            for x in set(arr):
                if x != mid and ''.join(left + [x] + right[::-1]) == ''.join(arr):
                    res = min(res, 2)
                    
    return res - 1 if res > 0 else 0