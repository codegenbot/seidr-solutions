def generate_integers(a, b):
    return [x for x in range(a, b+1) if x % 2 == 0] if a < b else [x for x in range(b, a+1) if x % 2 == 0]