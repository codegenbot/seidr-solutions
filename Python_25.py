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
    input_str = raw_input()
    input_list = list(map(int, input_str.split()))

    n = input_list[0]
    result = solve(n)
    print(result)


if __name__ == "__main__":
    main()