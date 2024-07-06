def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([result[-1], delimeter])
    if len(result) < len(numbers):
        result.extend([numbers[-1]])
    return result