def intersperse(numbers: list[int], delimiter: int) -> list[int]:
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()
    return result