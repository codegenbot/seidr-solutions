def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = []
    result.append(numbers[0])
    for i in range(len(numbers)-1):
        if i < len(numbers) - 2:
            result.extend([delimeter, numbers[i+1]])
        else:
            result.extend([delimeter, numbers[-1]])
    return result