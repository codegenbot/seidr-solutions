```
def smallest_change(arr):
    n = len(arr)
    total_sum = sum(arr)
    min_diff = float('inf')
    
    for i in range(1 << n):
        temp_sum = 0
        for j in range(n):
            if (i & (1 << j)):
                temp_sum += arr[j]
        
        diff = abs(temp_sum - (total_sum - temp_sum))
        min_diff = min(min_diff, diff)
    
    return min_diff