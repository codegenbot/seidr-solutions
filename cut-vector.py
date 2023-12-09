```python
def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    min_diff = float('inf')
    cut_index = -1

    for i in range(n):
        left_sum += vector[i]
        right_sum -= vector[i]

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    
    return vector[:cut_index+1], vector[cut_index+1:]

input_string = input()
vector = list(map(int, input_string.split()))

left, right = cut_vector(vector)
print("\n".join(map(str, left)))
print("\n".join(map(str, right)))
```