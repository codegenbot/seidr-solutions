def process_numbers(numbers, delimiter):
    result = []
    for num in numbers:
        if num == delimiter:
            if len(result) > 0 and result[-1] != delimiter:
                result.append(delimiter)
        else:
            while len(result) > 1 and result[-1] == delimiter:
                result.pop()
            result.append(num)
    return result