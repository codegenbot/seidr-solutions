def intersperse(numbers: list[int], delimiter: str) -> list[str]:
    if len(numbers) == 0:
        return []

    result = [str(delimiter)]
    for i in range(len(numbers)):
        result.extend([str(numbers[i]), str(delimiter)])
    if result[-1] == str(delimiter):
        result.pop()

    return [''.join(result)]