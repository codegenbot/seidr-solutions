def leaders(arr):
    n = len(arr)
    max_right = arr[n-1]
    leaders = [max_right]
    
    return [num if i == j else max_right for i, num in enumerate(reversed(arr))][::-1]