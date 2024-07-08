def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None
    a = max(xs, key=abs)
    for i in range(1, len(xs)):
        if xs[i] == a:
            return -i / xs[0]