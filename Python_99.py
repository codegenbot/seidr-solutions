def round_half_up(value):
    if value < 0:
        if int(value) == value:
            return int(value)
        else:
            return round(value)
    elif value > 0:
        if int(value) == value:
            return int(value)
        else:
            return math.ceil(value)