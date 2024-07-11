def closest_integer(value):
    value = float(value)
    if abs(int(value) - value) < abs(int(round(value)) - value):
        return int(round(value))
    else:
        return round(value) if value >= 0 else -round(abs(value))