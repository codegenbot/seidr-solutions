def gcd(a, b):
    indices = []
    while b != 0:
        a_mod = a % b
        if a_mod == 0:
            indices.append(i)
        a = b
        b = a_mod
    return len(indices)