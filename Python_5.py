def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    interspersed = []
    if len(numbers) > 0:
        interspersed.append(numbers[0])
        for i in range(1, len(numbers)):
            interspersed.extend([delimiter, numbers[i]])
    return interspersed