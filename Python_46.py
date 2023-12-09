def fib4(n):
    phi = (1 + sqrt(5)) / 2
    psi = 1 - phi
    return int((phi**n - psi**n) / sqrt(5))