```python
def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    min_diff = float('inf')
    cut_index = 0
    
    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum -= vector[i]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    
    return vector[:cut_index+1], vector[cut_index+1:]

# Read input from user
vector = []
while True:
    try:
        line = input()
        if line:
            vector.append(int(line))
        else:
            break
    except EOFError:
        break

# Call the function and print the output
result1, result2 = cut_vector(vector)
print(result1)
print(result2)
```