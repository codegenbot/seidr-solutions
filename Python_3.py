def below_zero(operations):
    return any(sum(operations[:i+1]) < 0 for i in range(len(operations)))