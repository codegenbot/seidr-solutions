def intersperse(numbers: List[int], delimeter: str) -> list:
    if len(numbers) == 0:
        return []
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([delimeter, str(numbers[i])])
    result.append(delimeter)
    return result