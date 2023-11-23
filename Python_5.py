def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = []
    for num in numbers:
        result.append(num)
        result.append(delimeter)
    result.pop()  # remove the last delimiter
    return result