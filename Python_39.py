def prime_fib(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    def fib(n):
        a, b = 0, 1
        for _ in range(n):
            a, b = b, a + b
        return a

    count = 0
    num = 1
    while count < n:
        num += 1
        if is_prime(num) and num == fib(count):
            count += 1
    return num

while True:
    try:
        n = int(input("Enter the number of prime Fibonacci numbers to find: "))
        if n > 0:
            break
        else:
            print("Please enter a positive integer.")
    except ValueError:
        print("Please enter a valid integer.")

print(prime_fib(n))