def intersperse(numbers: list[int], delimeter: str) -> list[str]:
    result = [str(numbers[0])]
    for i in range(1, len(numbers)):
        result.extend([delimeter, str(numbers[i])])
    return result