def intersperse(numbers: list[int], delimiter: int) -> list[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([delimiter, numbers[i]])
    return result