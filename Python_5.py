def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = []
    for num in numbers:
        if result:
            result.append(delimeter)
        result.append(num)
    return result