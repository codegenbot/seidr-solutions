def prime_fib(n):
    if n <= 1:
        return "Not Prime"
    elif n == 2:
        return "Prime"
    elif n > 2:
        for i in range(2, n):
            if n % i == 0:
                return "Not Prime"
        return "Prime"

try:
    n = int(input("Enter a number: "))
    print(prime_fib(n))
except ValueError:
    print("Please enter a valid integer.")