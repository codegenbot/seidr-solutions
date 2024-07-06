```
if __name__ == '__main__':
    n = int(input("Enter a number: "))
    print(factorize(n))

def factorize(n: int) -> list:
    i = 2
    factors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.append(i ** count)
            i += 1
    if n > 1:
        factors.append(n)
    return factors