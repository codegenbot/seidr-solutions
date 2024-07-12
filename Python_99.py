```
def closest_integer(value):
    num = float(value)
    integer_part = int(num)
    decimal_part = abs(num) - integer_part
    if decimal_part >= 0.5:
        return integer_part + 1 if num > 0 else integer_part - 1
    else:
        return integer_part