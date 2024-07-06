```
def factorize(n):
    factors = set()
    for i in range(1, n + 1):
        if n % i == 0:
            factors.add(i)
    return ", ".join(map(str, sorted(factors)))

if __name__ == "__main__":
    n = int(input("Enter an integer: "))
    print(factors := factorize(n))