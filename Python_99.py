```
def closest_integer(value):
    value = float(value)
    if value == int(value):
        return int(value)
    else:
        return round(value) if value > 0 else -round(-value)