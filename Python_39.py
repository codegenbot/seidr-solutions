def prime_fib(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    def generate_fibonacci(count):
        fib_sequence = [0, 1]
        while len(fib_sequence) < n:
            fib_sequence.append(fib_sequence[-1] + fib_sequence[-2])
        return fib_sequence

    try:
        n = int(n)
        if n < 1:
            return "Invalid input"
        
        fib_sequence = generate_fibonacci(n)
        prime_fibonacci = [num for num in fib_sequence if is_prime(num)]
        
        return prime_fibonacci
    except ValueError:
        return "Invalid input"

try:
    n = input()
    print(prime_fib(n))
except:
    print("Invalid input")