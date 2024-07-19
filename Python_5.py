def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    interspersed_list = []
    for i in range(len(numbers) - 1):
        interspersed_list.extend([numbers[i], delimeter])
    interspersed_list.append(numbers[-1])
    return interspersed_list