def monotonic(l: list):
    if len(l) <= 1:
        return True
    direction = l[1] - l[0]
    for i in range(2, len(l)):
        if (l[i] - l[i - 1]) * direction < 0:
            return False
    return True