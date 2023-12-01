from typing import List


def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    if n > 1:
        factors.append(n)
    return factors


def solve(n: int) -> List[int]:
    return factorize(n)


def main():
    n = int(input('Enter a number: '))
    result = solve(n)
    print(*result)


if __name__ == '__main__':
    main()