```python
def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    cut_index = 0
    min_diff = float('inf')

    for i in range(n):
        left_sum += vector[i]
        right_sum -= vector[i]
        
        diff = abs(left_sum - right_sum)
        
        if diff < min_diff:
            min_diff = diff
            cut_index = i+1
    
    return vector[:cut_index], vector[cut_index:]
```