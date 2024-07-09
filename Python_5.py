def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    if len(numbers) == 0:
        return []
    result = [numbers[0]]
    for num in numbers[1:]:
        result.extend([num, delimeter])
    return result