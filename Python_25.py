```
import math

def factorize(n):
    factors = []
    for i in range(2, int(math.sqrt(n)) + 1):
        while n % i == 0:
            factors.append(str(i))
            n //= i
    if n > 1:
        factors.append(str(n))
    return ' * '.join(factors)

def solve():
    n = int(input("Enter a number: "))
    print(factorize(n))

if __name__ == '__main__':
    solve()