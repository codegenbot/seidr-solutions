```python
def cut_vector(vector):
    n = len(vector)
    prefix_sum = [0] * (n + 1)
    for i in range(n):
        prefix_sum[i+1] = prefix_sum[i] + vector[i]
    
    total_sum = prefix_sum[n]
    min_diff = float('inf')
    cut_index = -1
    
    for i in range(1, n):
        left_sum = prefix_sum[i]
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)
        
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

# Get the resulting subvectors
subvector1, subvector2 = cut_vector(vector)

# Print the subvectors
for num in subvector1:
    print(num)
print()
for num in subvector2:
    print(num)
```