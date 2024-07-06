def closest_integer(value):
    num = float(value)
    return (
        round(num)
        if num % 1 < 0.5
        else int(round(num)) + 1 if num > 0 else int(round(num)) - 1
    )