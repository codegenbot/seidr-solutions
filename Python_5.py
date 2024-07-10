def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers) - 1):
        result.extend([numbers[i], delimiter])
    if numbers:
        result.append(numbers[-1])
    return result