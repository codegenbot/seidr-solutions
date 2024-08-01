def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True


def fibonacci(n):
    if n <= 1:
        return n
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)


count = 0
i = 0
n = int(input("Enter a number: "))
while count < n:
    if is_prime(fibonacci(i)):
        count += 1
    i += 1
print(fibonacci(i - 1))