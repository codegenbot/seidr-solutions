def gcd(a, b):
    indices = []
    while b != 0:
        a_mod = a % b
        indices.append(a_mod)
        a = b
        b = a_mod
    return len(indices)