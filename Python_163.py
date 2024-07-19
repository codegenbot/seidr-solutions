def generate_integers(a, b):
    return [i for i in range(a, b+1) if i % 2 == 0] if a < b else [i for i in range(b, a+1) if i % 2 == 0]