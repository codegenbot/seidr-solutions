def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = []
    for number in numbers:
        result.append(number)
        result.append(delimeter)
    result.pop()  # remove the last delimiter
    return result