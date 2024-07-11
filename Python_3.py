```
def below_zero(operations):
    total = sum([num for num in operations if type(num) == int])
    return total < 0