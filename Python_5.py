def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    new_numbers = []
    for i in range(len(numbers)):
        new_numbers.append(numbers[i])
        if i < len(numbers) - 1:
            new_numbers.append(delimeter)
    return new_numbers