def gcd(a, b):
    indices = []
    while b != 0 or a_mod != 0:
        a_mod = a % b
        if a_mod == 0:
            break
        indices.append(a_mod)
        a = b
        b = a_mod
    return indices