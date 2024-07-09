def generate_integers(a, b):
    return [num for num in range(a, b+1) if num % 2 == 0] if a < b else [num for num in range(b, a+1) if num % 2 == 0]