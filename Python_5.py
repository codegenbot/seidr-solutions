def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    new_list = []
    for i in range(len(numbers)):
        if i != 0:
            new_list.append(delimeter)
        new_list.append(numbers[i])
    return new_list