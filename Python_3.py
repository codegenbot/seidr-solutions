def below_zero(operations):
    count = 0
    for operation in operations:
        if operation < 0:
            count += 1
    return count > 0