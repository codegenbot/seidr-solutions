def factorize(n):
    factors = []
    for i in range(1, n + 1):
        if n % i == 0:
            factors.append(i)
    return factors

def main():
    n = int(input().strip())
    result = factorize(n)
    output = " ".join(str(f) for f in result)
    print(output)

main()