```
n = int(input("Enter the number: "))

def fibfib(n):
    if n <= 1:
        return [1]
    elif n == 2:
        return [1, 1]
    else:
        fib_sequence = [1, 1]
        a, b = 1, 1
        for _ in range(2, n + 1):
            a, b = b, a + b
            fib_sequence.append(b)
        return fib_sequence

print(fibfib(n))