Define the function find_leaders as follows:

```python
def find_leaders(vector):
    leaders = []
    max_value = float('-inf')
    for i in range(len(vector)-1, -1, -1):
        if vector[i] > max_value:
            max_value = vector[i]
            leaders.append(max_value)
    return leaders[::-1]
```

Read the input vector from the user:

```python
vector = list(map(int, input().split()))
```

Call the find_leaders function with the input vector and store the result in the variable result:

```python
result = find_leaders(vector)
```

Print each number in the result:

```python
for num in result:
    print(num)
```