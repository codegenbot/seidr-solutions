def intersperse(numbers, delimeter):
    return [x for num in numbers for x in [num, delimeter]][:-1]