def prime_fib(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True

    def is_fib(num):
        return ((5 * num * num + 4) ** 0.5).is_integer() or ((5 * num * num - 4) ** 0.5).is_integer()

    prime_fib_list = []
    i = 2
    while len(prime_fib_list) < n:
        if is_prime(i) and is_fib(i):
            prime_fib_list.append(i)
        i += 1

    return prime_fib_list

n = int(input("Enter the value of 'n': "))
result = prime_fib(n)
print(result)