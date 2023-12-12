```python
def cut_vector(vector):
    prefix_sum = [0]
    for num in vector:
        prefix_sum.append(prefix_sum[-1] + num)
    
    total_sum = prefix_sum[-1]
    min_diff = float('inf')
    cut_index = -1
    
    for i in range(1, len(prefix_sum)):
        left_sum = prefix_sum[i]
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)
        
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    
    return vector[:cut_index], vector[cut_index:]

vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except EOFError:
        break

left, right = cut_vector(vector)
print(*left, sep="\n")
print(*right, sep="\n")
```