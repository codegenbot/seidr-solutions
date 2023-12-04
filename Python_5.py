```python
def intersperse(numbers: typing.List[int], delimeter: int) -> typing.List[int]:
    result = []
    for i in range(len(numbers)):
        if i != len(numbers) - 1:
            result.append(numbers[i])
            result.append(delimeter)
        else:
            result.append(numbers[i])
    return result
```