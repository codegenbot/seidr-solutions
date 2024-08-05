def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = []
    for num in numbers:
        result.extend([num, delimeter])
    return result[:-1]