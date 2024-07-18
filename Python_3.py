def below_zero(operations):
    count = sum(1 for num in operations if num < 0)
    return count