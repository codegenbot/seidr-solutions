```
def intersperse(numbers: list[int], delimiter: str) -> list[str]:
    if len(numbers) <= 1:
        if len(numbers) == 0:
            return [str(delimiter)]
        else:
            return [str(numbers[0])]
    result = [str(numbers[0])]
    for i in range(1, len(numbers)):
        result.extend([str(delimiter), str(numbers[i])])
    if len(result) > 2: 
        result.append(str(delimiter))
    return result