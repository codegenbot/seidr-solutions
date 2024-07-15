def intersperse(numbers: list[int], delimiter: str) -> list[str]:
    result = [str(numbers[0])]
    for i in range(1, len(numbers)):
        result.extend([delimiter, str(numbers[i])])
    return result