```
def intersperse(numbers: list[int], delimiter: str) -> list:
    if not numbers:
        return []
    result = [str(numbers[0])]
    for num in numbers[1:]:
        result.extend([str(num), [delimiter]])
    result.append(delimiter)
    return [int(i) if i.isdigit() else i for i in result]