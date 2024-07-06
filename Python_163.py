```
def generate_integers(a, b):
    even_digits = [i for i in range(min(a, b), max(a, b)+1) if int(str(i)) % 2 == 0]
    return sorted(even_digits)