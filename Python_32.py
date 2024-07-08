def find_zero(xs: list):
    if len(xs) % 2 == 0 and xs[0] == 0:
        a = max(xs, key=abs)
        for i in range(1, len(xs)):
            if xs[i] == a:
                return -i / xs[i]
    return None