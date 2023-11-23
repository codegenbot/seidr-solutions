def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    interspersed = []
    for i in range(len(numbers)-1):
        interspersed.append(numbers[i])
        interspersed.append(delimeter)
    if numbers:
        interspersed.append(numbers[-1])
    return interspersed