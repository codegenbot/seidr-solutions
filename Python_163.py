def generate_integers(a, b):
    return sorted([i for i in range(min(a, b), max(a, b) + 1) if int(str(i)) % 2 == 0])