```python
def cut_vector(vector):
    total_sum = sum(vector)
    half_sum = total_sum // 2
    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        if current_sum == half_sum or current_sum == half_sum + num:
            return vector[:i+1], vector[i+1:]
    return vector, [0]

# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except EOFError:
        break

# Call the function and print the output
left, right = cut_vector(vector)
for num in left:
    print(num)
for num in right:
    print(num)
```