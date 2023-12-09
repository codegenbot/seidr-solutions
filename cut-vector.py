```python
def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    smallest_diff = float('inf')
    split_index = -1
    
    for i in range(n):
        left_sum += vector[i]
        right_sum -= vector[i]
        diff = abs(left_sum - right_sum)
        
        if diff <= smallest_diff:
            smallest_diff = diff
            split_index = i
            
    return vector[:split_index+1], vector[split_index+1:]

input_string = input()
vector = list(map(int, input_string.split()))

left, right = cut_vector(vector)
print("\n".join(map(str, left)))
print("\n".join(map(str, right)))
```