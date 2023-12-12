```python
def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    min_difference = float('inf')
    cut_index = -1
    
    for i, num in enumerate(vector):
        current_sum += num
        difference = abs(total_sum - 2 * current_sum)
        
        if difference < min_difference:
            min_difference = difference
            cut_index = i
    
    return vector[:cut_index+1], vector[cut_index+1:]

# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except EOFError:
        break

# Call the function and print the result
subvector1, subvector2 = cut_vector(vector)
for num in subvector1:
    print(num)
for num in subvector2:
    print(num)
```