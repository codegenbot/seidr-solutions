def factorize(n):
    factors = []
    for i in range(1, n + 1):
        if n % i == 0:
            factors.append(i)
    return factors

def main():
    n = int(input())
    factors = factorize(n)
    print(factors)

if __name__ == "__main__":
    main()