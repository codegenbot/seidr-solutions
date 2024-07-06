
def find_zero(xs: list):
    if len(xs) % 2 == 1 or xs[-1] != 0:
        return None
    x = 0
    for i in range(len(xs) // 2):
        x += xs[i] * math.pow(-1, i) / (math.factorial(i) * math.factorial(len(xs) - i - 1))
    return x