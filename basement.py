```python
def first_negative_index(vec):
    cumulative_sum = 0
    index = 0
    for i in range(len(vec)):
        cumulative_sum += vec[i]
        if cumulative_sum < 0:
            return index
        index += 1
    return -1

# Read input from user
n = int(input())
vec = []
for _ in range(n):
    vec.append(int(input()))

# Call the function and print the result
result = first_negative_index(vec)
print(result)
```