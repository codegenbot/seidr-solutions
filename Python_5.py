def intersperse(numbers: list[int], delimiter: str) -> list[str]:
    if not numbers:
        return []
    result = [str(numbers[0])]
    for num in numbers[1:]:
        result.extend([str(delimiter), str(num)])
    return result