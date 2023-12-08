```python
def find_leaders(vector):
    leaders = [vector[-1]]
    max_value = vector[-1]
    for i in range(len(vector)-2, -1, -1):
        if vector[i] >= max_value:
            max_value = vector[i]
            leaders.append(max_value)
    return leaders[::-1]
```