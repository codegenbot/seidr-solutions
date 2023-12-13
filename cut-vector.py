```python
def cut_vector(vector):
    n = len(vector)
    prefix_sum = [0] * (n + 1)
    suffix_sum = [0] * (n + 1)
    
    for i in range(1, n + 1):
        prefix_sum[i] = prefix_sum[i - 1] + vector[i - 1]
        suffix_sum[n - i] = suffix_sum[n - i + 1] + vector[n - i]
    
    min_diff = float('inf')
    cut_index = -1
    
    for i in range(1, n):
        diff = abs(prefix_sum[i] - suffix_sum[i])
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    
    return vector[:cut_index], vector[cut_index:]

# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except:
        break

# Call the cut_vector function and print the results
left, right = cut_vector(vector)
for num in left:
    print(num)
for num in right:
    print(num)
```
