def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([delimiter])
        result.extend([numbers[i]])
    return result