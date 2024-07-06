def fibfib(n: int):
    if n < 0:
        return "Error: Input must be non-negative."
    elif n == 0:
        return 0
    else:
        fib_sequence = [0, 1]
        for i in range(2, n + 1):
            fib_sequence.append(fib_sequence[i - 1] + fib_sequence[i - 2])
        print(f"The {n}th term of the Fibonacci sequence is {fib_sequence[-1]}")