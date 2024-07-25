n = int(input("Enter the value of 'n': "))

def prime_fib(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    def is_fib(num):
        return (5*num*num + 4)**0.5 % 1 == 0 or (5*num*num - 4)**0.5 % 1 == 0

    count = 0
    current_num = 2
    while count < n:
        if is_prime(current_num) and is_fib(current_num):
            count += 1
        current_num += 1

    return current_num - 1

result = prime_fib(n)
print(result)