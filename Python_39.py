def prime_fib(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    def fibonacci(num):
        if num <= 1:
            return num
        else:
            return fibonacci(num - 1) + fibonacci(num - 2)

    fib_number = fibonacci(n)
    if is_prime(fib_number):
        return "Prime"
    else:
        return "Not Prime"

n = int(input("Enter a number: "))
result = prime_fib(n)
print(result)