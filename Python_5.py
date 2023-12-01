def intersperse(numbers_str: str, delimiter: int) -> str:
    numbers = list(map(int, numbers_str.split()))
    result = []
    for i in range(len(numbers) - 1):
        result.append(numbers[i])
        result.append(delimiter)
    result.append(numbers[-1])
    return ' '.join(map(str, result))