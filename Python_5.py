def intersperse(numbers: list[int], delimiter: str) -> list[str]:
    if not numbers:
        return [str(delimiter)]
    result = [str(numbers[0])]
    for i in range(1, len(numbers)):
        result.append(str(delimiter))
        result.append(str(numbers[i]))
    if len(result) == 1:
        result.append(str(delimiter))
    else:
        result.append(str(delimiter))
    return result