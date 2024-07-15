def intersperse(numbers: list[int], delimiter: str) -> list[str]:
    if not numbers:
        return [str(delimiter)]
    result = [str(delimiter)] + [str(num) for num in numbers] + [str(delimiter)]
    return result