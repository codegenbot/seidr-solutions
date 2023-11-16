

def prime_fib(n: int):
    fibonacci = [0, 1, 2]
    while len(fibonacci) <= n:
        fibonacci.append(fibonacci[-1] + fibonacci[-2])
    return fibonacci[n]
    """
