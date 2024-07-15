def intersperse(numbers: list[int], delimiter: str) -> list[str]:
    result = [str(numbers[0])]
    for num in numbers[1:]:
        result.append(delimiter)
        result.append(str(num))
    return result