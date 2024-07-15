def intersperse(numbers: list[int], delimiter: str) -> list[str]:
    if not numbers:
        return [str(delimiter)]
    result = [str(delimiter)]
    for num in numbers:
        result.extend([str(num), str(delimiter)])
    result.pop()  
    return result