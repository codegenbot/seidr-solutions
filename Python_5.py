def intersperse(numbers: List[int], delimiter: str) -> list:
    result = [str(numbers[0])]
    for i, num in enumerate(numbers[1:], 1):
        result.extend([delimiter])
        result.extend([str(num)])
    if len(numbers) > 1:
        result.append(delimiter)
    return result