def intersperse(numbers: list[int], delimiter: str) -> list[str]:
    if len(numbers) == 0:
        return []
    result = [str(delimiter)]
    for i in range(len(numbers)):
        result.append(str(numbers[i]))
        if i < len(numbers) - 1:
            result.append(str(delimiter))
    return result