def complete_code(numbers, delimiter):
    return [x for sublist in [[num, delimiter] for num in numbers] for x in sublist[:-1]]  