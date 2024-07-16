def prime_fib(n):
    a, b = 0, 1
    count = 0
    prime_fib_nums = []
    while count < n:
        a, b = b, a + b
        if is_prime(a):
            prime_fib_nums.append(a)
            count += 1
    return prime_fib_nums

n = int(input("Enter an integer: "))
result = prime_fib(n)
print(result)