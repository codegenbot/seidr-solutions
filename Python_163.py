def generate_integers(a, b):
    if a > b:
        a, b = b, a
    return [i for i in range(a, b + 1) if str(i).count("0") % 2 == 0]