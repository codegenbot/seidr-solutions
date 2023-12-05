```python
def cut_vector(vector):
    n = len(vector)
    if n == 1:
        return vector[0], 0
    elif n == 2:
        return vector[0], vector[1]
    else:
        min_diff = math.inf
        for i in range(1, n):
            total = abs(sum(vector[:i]) - sum(vector[i:]))
            if total < min_diff:
                min_diff = total
                cut = i
        return vector[:cut], vector[cut:]
```
The issue is that the code is using a Python reserved word, `sum`, as a variable name. To fix this, you can rename the variable to something else, like `total`.