```python
def find_leaders(input_vector):
    leaders = []
    max_right = input_vector[-1]
    for i in range(len(input_vector)-2, -1, -1):
        if input_vector[i] >= max_right and all(input_vector[i] >= x for x in leaders):
            leaders.append(input_vector[i])
        max_right = max(max_right, input_vector[i])
    leaders.append(max_right)
    return leaders
```