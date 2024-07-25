def prime_fib(n):
    if n <= 0:
        return "Invalid input. Please enter a positive integer."
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        a, b = 0, 1
        for _ in range(2, n):
            a, b = b, a + b
        return b

try:
    n = int(input("Enter a number: "))
    result = prime_fib(n)
    print(result)
except ValueError:
    print("Invalid input. Please enter a valid integer.")