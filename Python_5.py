def intersperse(numbers: list[int], delimiter: str) -> list:
    if not numbers:
        return []
    result = [str(numbers[0])]
    for num in numbers[1:]:
        result.append(str(num))
        result.extend([delimiter])
    return result