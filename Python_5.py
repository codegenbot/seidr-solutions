def intersperse(numbers: list[int], delimiter: str) -> list[str]:
    result = []
    for i, num in enumerate(numbers):
        result.append(str(num))
        if i < len(numbers) - 1:
            result.append(str(delimiter))
    return result