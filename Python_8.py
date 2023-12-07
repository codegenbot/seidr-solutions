Here is the modified code with the fix:
```
def sum_product(numbers: list) -> Tuple[int, int]:
    return (sum(numbers), math.prod(numbers))
```