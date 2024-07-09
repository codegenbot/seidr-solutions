def find_zero(xs: list):
    if not xs or xs[0] != 0:
        return None
    if 0 in xs:
        return 0
    a = max(xs, key=abs)
    for i in range(1, len(xs)):
        if xs[i] == a:
            return -i / xs[i]