def intersperse(numbers: list[int], delimiter: str) -> list[str]:
    if not numbers:
        return [str(delimiter)]
    result = [str(delimiter)]
    for i in range(len(numbers)):
        result.extend([str(delimiter), str(numbers[i])])
    result.append(str(delimiter))
    return result