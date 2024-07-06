```python
def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = [numbers[0]]
    for num in numbers[1:]:
        result.extend([num, delimiter])
    if result and result[-1] == delimiter:
        result.pop()  # remove trailing delimiter
    return result