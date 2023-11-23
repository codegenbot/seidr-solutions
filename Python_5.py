def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = []
    for i, num in enumerate(numbers):
        if i != len(numbers) - 1:
            result.append(num)
            result.append(delimeter)
        else:
            result.append(num)
    return result