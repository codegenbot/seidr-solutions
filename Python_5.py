def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    interspersed = []
    for num in numbers:
        interspersed.extend([num, delimeter])
    return interspersed[:-1]