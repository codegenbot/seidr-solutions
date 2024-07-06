
def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i, num in enumerate(numbers):
        if i % 2 == 0:
            result.append(num)
        else:
            result.append(delimiter)
    return result