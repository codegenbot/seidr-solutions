
def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        if i % 2 == 0:
            result.append(delimeter)
        else:
            result.append(numbers[i // 2])
    return result