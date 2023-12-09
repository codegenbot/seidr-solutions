Here's the modified code that should work correctly:
```python
from numpy import prod
def sum_product(numbers):
    if len(numbers) == 0:
        return (0, 1)
    else:
        return (sum(numbers), prod(numbers))
```
Alternatively, here's the code with a custom implementation of `prod`:
```python
def prod(numbers):
    result = 1
    for number in numbers:
        result *= number
    return result
def sum_product(numbers):
    if len(numbers) == 0:
        return (0, 1)
    else:
        return (sum(numbers), prod(numbers))
```