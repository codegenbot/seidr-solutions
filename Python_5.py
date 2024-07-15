def intersperse(numbers: list[int], delimiter: str) -> list[str]:
    if not numbers:
        return [str(delimiter)]
    result = [str(numbers[0])]
    for i in range(1, len(numbers)):
        result.extend([str(delimiter), str(numbers[i])])
    if len(result) > 2: 
        result.append(str(delimiter))
    return result