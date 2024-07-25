def prime_fib(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True

    memo = {}

    def fibonacci(num):
        if num in memo:
            return memo[num]
        if num <= 1:
            return num
        else:
            result = fibonacci(num - 1) + fibonacci(num - 2)
            memo[num] = result
            return result

    fib_num = fibonacci(n)
    return is_prime(fib_num)

try:
    n = int(input("Enter a number: "))
    result = prime_fib(n)
    print(result)
except ValueError:
    print("Invalid input. Please enter a valid integer.")