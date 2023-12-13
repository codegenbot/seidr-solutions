```python
def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    index = 0
    for i in range(len(vector)):
        current_sum += vector[i]
        if current_sum == total_sum - current_sum or abs(current_sum - (total_sum - current_sum)) < abs(index - (len(vector) - index)):
            index = i + 1
    return vector[:index], vector[index:]

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
print(*subvector1, sep='\n')
print(*subvector2, sep='\n')
```