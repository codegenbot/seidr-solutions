```
def closest_integer(value):
    value = float(value)
    if abs(value - int(value)) < 0.5:
        return round(value) if value > 0 else -round(abs(value))
    return int(value)