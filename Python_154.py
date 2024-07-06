def cycpattern_check(a, b):
    if not a.isnumeric() or not b.isnumeric():
        return "Invalid input"
    total = int(a) + int(b)
    if total % 2 == 0:
        return True
    else:
        return False