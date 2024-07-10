```Python
def eat(number, need, remaining):
    if number < need:
        return [0, remaining - need + number]
    else:
        return [min(number, need), remaining - min(number, need)]