def intersperse(numbers: list[int], delimiter: str) -> list[str]:
    if not numbers:
        return [str(delimiter)]
    result = [str(delimiter)] + [str(num) + str(delimiter) for num in numbers]
    result.append(str(delimiter))
    return result