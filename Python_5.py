def intersperse(delimiter: int) -> List[int]:
    numbers = list(map(int, input().split()))
    result = []
    for i in range(len(numbers)):
        if i > 0:
            result.append(delimiter)
        result.append(numbers[i])
    return result