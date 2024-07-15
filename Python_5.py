```
def intersperse(numbers: list[int], delimiter: str) -> list[str]:
    if not numbers:
        return [str(delimiter)]
    result = [str(numbers[0])] + [str(delimiter)] + [str(num) + str(delimiter) for num in numbers[1:]] + [str(delimiter)]
    return result