def prime_fib(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True
    
    def is_fib(num):
        return (5 * num * num + 4) ** 0.5 % 1 == 0 or (5 * num * num - 4) ** 0.5 % 1 == 0

    prime_fib_list = [num for num in range(2, n) if is_prime(num) and is_fib(num)]
    return prime_fib_list

n = int(input("Enter the value of 'n': "))
result = prime_fib(n)
print(result)