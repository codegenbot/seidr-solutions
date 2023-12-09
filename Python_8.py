```
def sum_product(numbers: list) -> Tuple[int, int]:
    if len(numbers) == 0:
        return (0, 1)
    else:
        return (sum(numbers), math.prod(numbers))
```
The issue is caused by the `^` character at the end of the first line, which is not valid Python syntax. To fix this, you can remove the `^` character and replace it with a space or other whitespace character to separate the two lines.