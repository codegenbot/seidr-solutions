def prime_fib(n):
    if n <= 1:
        return "Not Prime"
    elif n == 2:
        return "Prime"
    else:
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return "Not Prime"
        return "Prime"

try:
    n = int(input())
    if n < 0:
        print("Not Prime")
    else:
        print(prime_fib(n))
except ValueError:
    print("Program did not receive expected input")