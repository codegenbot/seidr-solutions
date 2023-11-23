def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    interspersed = []
    for num in numbers:
        interspersed.append(num)
        interspersed.append(delimeter)
    if numbers:
        interspersed.pop()  # Remove the last delimiter if numbers list is not empty
    return interspersed