def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    if len(numbers) == 0:
        return []
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([delimeter, numbers[i]])
    return result