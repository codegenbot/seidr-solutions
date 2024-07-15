def intersperse(numbers: list[int], delimiter: str) -> list:
    if not numbers:
        return []
    result = [str(delimiter)]
    for num in numbers:
        result.append(str(num))
        result.append(str(delimiter))
    return result