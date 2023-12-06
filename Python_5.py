def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        if i != len(numbers) - 1:
            result.append(delimeter)
        result.append(numbers[i])
    return result