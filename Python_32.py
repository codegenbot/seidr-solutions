def find_zero(xs: list):
    if len(xs) == 0 or len(xs) % 2 != 0 or xs[0] == 0:
        return None
    a = max(xs, key=abs)
    for i in range(1, len(xs)):
        if xs[i] == a:
            return -i / xs[i]