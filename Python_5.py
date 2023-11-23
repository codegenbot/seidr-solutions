def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)-1):
        result.append(numbers[i])
        result.append(delimiter)
    if numbers:
        result.append(numbers[-1])
    return result