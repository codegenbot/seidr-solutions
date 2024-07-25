def prime_fib(n):
    if n < 0:
        return False

    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True

    def fibonacci(num):
        if num < 0:
            return None
        if num <= 1:
            return num
        else:
            return fibonacci(num - 1) + fibonacci(num - 2)

    if n < 0:
        return False

    fib_num = fibonacci(abs(n))
    return is_prime(fib_num)

try:
    n = int(input("Enter a number: "))
    result = prime_fib(n)
    print(result)
except ValueError:
    print("Invalid input. Please enter a valid integer.")