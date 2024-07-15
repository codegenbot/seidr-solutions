def intersperse(numbers: list[int], delimiter: str) -> list[str]:
    if not numbers:
        return [str(delimiter)]
    result = []
    for i in range(len(numbers)):
        if i > 0:
            result.extend([str(delimiter)])
        result.append(str(numbers[i]))
    return result