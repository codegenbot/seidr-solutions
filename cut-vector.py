```python
def cut_vector(vector):
    left_sum = 0
    right_sum = sum(vector)
    min_diff = float('inf')
    split_index = -1

    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum -= vector[i]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i

    return vector[:split_index+1], vector[split_index+1:]

# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except EOFError:
        break

# Call the function and print the output
subvector1, subvector2 = cut_vector(vector)
for num in subvector1:
    print(num)
for num in subvector2:
    print(num)
```