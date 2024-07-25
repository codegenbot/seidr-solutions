n = int(input("Enter the value of n: "))
def prime_fib(n):
    def fibonacci(n):
        if n <= 1:
            return n
        else:
            return fibonacci(n - 1) + fibonacci(n - 2)

    def is_prime(num):
        if num <= 1:
            return False
        if num <= 3:
            return True
        if num % 2 == 0:
            return False
        for i in range(3, int(num**0.5) + 1, 2):
            if num % i == 0:
                return False
        return True

    count = 0
    num = 1
    while count < n:
        num += 1
        if is_prime(num) and num == fibonacci(count):
            count += 1
    return num

result = prime_fib(n)
print(result)