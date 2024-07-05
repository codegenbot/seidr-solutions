def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    if not numbers:
        return numbers
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i < len(numbers) - 1:
            result.append(delimeter)
    return result