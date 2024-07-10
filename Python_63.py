```
def fibfib(n):
    if n <= 1:
        return [1]
    elif n == 2:
        return [1, 1]
    else:
        fib_sequence = [1, 1]
        a, b = 1, 1
        for _ in range(2, int(n) + 1):
            a, b = b, a + b
            fib_sequence.append(b)
        return fib_sequence

n = float(input("Enter a number (integer or decimal): "))
print(fibfib(int(n)))