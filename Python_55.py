def fib(n):
    if n <= 1:
        return n
    a, b = 1, 1
    for _ in range(2, n+1):
        a, b = b, a+b
    return b

n = int(input("Enter a number: "))
print(fib(n))