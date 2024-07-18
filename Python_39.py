def solve_problem(n):
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
    num = 2
    while count < n:
        if is_prime(num) and num == fib(num):
            count += 1
        num += 1
    return num - 1


n = int(input())
print(solve_problem(n))