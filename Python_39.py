n = int(input("Enter the value of n: "))

def prime_fib(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True

    def fibonacci(count):
        fib_sequence = [0, 1]
        for i in range(2, count):
            fib_sequence.append(fib_sequence[i-1] + fib_sequence[i-2])
        return fib_sequence

    fib_numbers = fibonacci(n)
    prime_fibonacci = [num for num in fib_numbers if is_prime(num)]

    return prime_fibonacci

result = prime_fib(n)
print(result)