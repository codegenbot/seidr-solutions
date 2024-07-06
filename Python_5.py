
def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = []
    for i, num in enumerate(numbers):
        if i % 2 == 0:
            result.append(delimeter)
        else:
            result.append(num)
    return result