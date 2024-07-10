def fibfib(n: int):
    if n <= 1:
        return "Fibonacci sequence for even numbers only"
    else:
        a, b = 0, 1
        result = []
        while b < n:
            if b % 2 == 0:
                result.append(str(b))
            a, b = b, a+b
        return ', '.join(result)

n = int(input("Enter an integer: "))
print(fibfib(n))