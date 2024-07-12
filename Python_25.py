def main():
    n = int(input("Enter an integer: "))
    factors = factorize(n)
    print(f"The prime factors of {n} are: {factors}")


def factorize(n: int) -> list:
    if not isinstance(n, int):
        return [n]
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.extend([i] * count)
    if n > 1:
        factors.append(n)
    return factors


if __name__ == "__main__":
    main()