def intersperse(numbers, delimiter):
    result = [x for sublist in [[num, delimiter] for num in numbers] for x in sublist]
    result.pop()
    return result