def cycpattern_check(a, b):
    return a.__contains__(b + b) or any(
        a.__contains__(rotated_b) for rotated_b in (b + b)[1:] + (b,)
    )