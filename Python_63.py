def fibfib(n: int):
    if n <= 1:
        return n
    phi = (1 + 5**0.5) / 2
    psi = 1 - phi
    fib_numbers = [0, 1]
    for i in range(2, n + 1):
        next_number = round(phi * fib_numbers[i - 1] + psi * fib_numbers[i - 2])
        fib_numbers.append(next_number)
    return fib_numbers[-1]