def solve():
    n = int(input("Enter a number: "))
    print(factorize(n))

def factorize(n: int) -> list:
    factors = []
    for i in range(2, int(n ** 0.5) + 1):
        count = 0
        while n % i == 0:
            n //= i
            count += 1
        if count > 0:
            for _ in range(count):
                factors.append(i)
    if n > 1:
        factors.append(n)
    return sorted(factors)