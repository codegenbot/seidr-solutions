def intersperse(numbers, delimiter):
    if not numbers:
        return []
    result = [numbers[0]]
    for num in numbers[1:]:
        result.append(delimiter)
        result.append(num)
    return result