result = []
    for num in numbers:
        result.append(num)
        if num != numbers[-1]:
            result.append(delimeter)
    return result