```
def intersperse(numbers: list[int], delimiter: str) -> list:
    if not numbers:
        return []
    result = [str(numbers[0])]
    for i, num in enumerate(numbers[1:], 1):
        result.extend([delimiter])
        result.extend([str(num)])
    return result