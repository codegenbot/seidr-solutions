def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    interspersed_list = []
    for i in range(len(numbers)):
        if i != 0:
            interspersed_list.append(delimeter)
        interspersed_list.append(numbers[i])
    return interspersed_list