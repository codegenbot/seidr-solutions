def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = []
    for num in numbers:
        result.extend([num, delimeter])
    result.pop()  # to remove the last delimeter
    return result