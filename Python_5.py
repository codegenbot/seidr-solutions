def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    if not numbers:
        return []
    result = []
    for i in range(len(numbers) - 1):
        result.append(numbers[i])
        result.append(delimeter)
    result.append(numbers[-1])
    return result