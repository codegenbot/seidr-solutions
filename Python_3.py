def below_zero(operations):
    return sum(1 for num in operations if num < 0) > 0