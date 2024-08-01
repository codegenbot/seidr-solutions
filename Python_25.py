from typing import List


def main():
    num = int(input("Enter a number: "))
    factors = factorize(num)
    print(f"The factors of {num} are: {factors}")


def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.append(i**count)
    if n > 1:
        factors.append(n)
    return factors


if __name__ == "__main__":
    main()