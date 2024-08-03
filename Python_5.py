def intersperse(numbers: list[int], delimiter: int) -> list[int]: 
    result = []
    for i in range(len(numbers)):
        if i > 0:
            result.append(delimiter)
        result.append(numbers[i])
    return result