def is_happy(s):
    if len(s) < 3:
        return False
    for i in range(0, len(s) - 2, 3):
        if len(set(s[i : i + 3])) != 3:
            return False
    if len(set(s[-2:])) == 1 or len(set(s[-1:])) == 1:
        return False
    return True