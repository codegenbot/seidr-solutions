def is_valid_fraction(fraction):
    try:
        num, denom = map(int, fraction.split("/"))
        return denom != 0
    except ValueError:
        return False