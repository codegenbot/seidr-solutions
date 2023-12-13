```python
def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    min_diff = float('inf')
    split_index = -1
    
    for i in range(len(vector)):
        current_sum += vector[i]
        diff = abs(current_sum * 2 - total_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i
    
    if split_index >= 0:
        return vector[:split_index+1], vector[split_index+1:]
    else:
        return vector, []
```