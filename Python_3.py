def below_zero(operations):
    if not operations:
        return "No input provided."

    count = 0
    for num in operations:
        if num < 0:
            count += 1

    return count