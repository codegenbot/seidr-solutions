import math

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0:
            return False
    return True

def is_fibonacci(num):
    return (
        int(math.sqrt(5 * num * num + 4)) ** 2 == 5 * num * num + 4
        or int(math.sqrt(5 * num * num - 4)) ** 2 == 5 * num * num - 4
    )

try:
    n = int(input("Enter a number: "))
    
    def prime_fib(n):
        count = 0
        num = 1
        while count < n:
            if is_prime(num) and is_fibonacci(num):
                count += 1
            num += 1
        return num - 1

    print(prime_fib(n))

except ValueError:
    print("Invalid input. Please enter a valid integer.")