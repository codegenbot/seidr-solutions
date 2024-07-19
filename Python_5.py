def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    if len(numbers) == 0:
        return []
    result = [numbers[0]]
    for i in range(len(numbers) - 1):
        result.extend([delimeter, numbers[i + 1]])
    return result