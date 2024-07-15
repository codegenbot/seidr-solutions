def intersperse(numbers: list[int], delimiter: str) -> list:
    if not numbers:
        return []
    result = [str(numbers[0])]
    for num in numbers[1:]:
        if num != numbers[0]:
            result.append(delimiter)
        result.append(str(num))
    result.append(delimiter)
    return result