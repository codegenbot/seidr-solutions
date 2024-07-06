```
def factorize(n):
    i = 2
    factors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(str(i))
    if n > 1:
        factors.append(str(n))
    return ' '.join(factors)

def solve():
    n = int(input("Enter a number: "))
    print(factorize(n))

if __name__ == '__main__':
    solve()