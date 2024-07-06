def generate_integers(a, b):
    return sorted([i for i in range(a, b + 1) if str(i).count("0") % 2 == 0])