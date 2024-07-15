def intersperse(numbers: list[int], delimiter: str) -> list[str]:
    if len(numbers) == 0:
        return []

    result = [str(delimiter)]
    for num in numbers:
        result.extend([str(num), str(delimiter)])
    result.pop()  
    return result