def gcd(a, b):
    indices = []
    while b != 0 or a % b != 0:
        if a % b == 0:
            break
        indices.append(a % b)
        a = b
        b = a % b
    return len(indices)