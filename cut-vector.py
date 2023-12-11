```python
def cut_vector(vector):
    min_diff = float('inf')
    index = -1
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            index = i
    return vector[:index], vector[index:]

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
left_subvector, right_subvector = cut_vector(vector)
for num in left_subvector:
    print(num)
for num in right_subvector:
    print(num)
```