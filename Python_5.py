def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    res = []
    for i in range(len(numbers)):
        res.append(numbers[i])
        if i < len(numbers) - 1:
            res.append(delimeter)
    return res