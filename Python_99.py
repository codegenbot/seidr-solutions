```
def closest_integer(value):
    val = float(value)
    return round(val) if abs(int(round(val)) - val) < 0.5 else int(round(val)) + (1 if val > 0 else -1)