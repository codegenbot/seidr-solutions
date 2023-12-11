```python
def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    prefix_sum = [0] * (n + 1)
    suffix_sum = [0] * (n + 1)
    for i in range(1, n + 1):
        prefix_sum[i] = prefix_sum[i - 1] + vector[i - 1]
    for i in range(n - 1, -1, -1):
        suffix_sum[i] = suffix_sum[i + 1] + vector[i]
    min_diff = float('inf')
    cut_index = -1
    for i in range(n):
        diff = abs(total_sum - 2 * prefix_sum[i])
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    return vector[:cut_index + 1], vector[cut_index + 1:]

# Read input from user
vector = []
while True:
    try:
        line = input()
        vector.append(int(line))
    except EOFError:
        break

# Call the function and print the result
subvector1, subvector2 = cut_vector(vector)
for num in subvector1:
    print(num)
for num in subvector2:
    print(num)
```