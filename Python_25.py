from typing import List


def factorize(n: int) -> List[int]:
    i = 2
    factors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    if n > 1:
        factors.append(n)
    return factors


def main():
    num = int(input("Enter a number: "))
    print(check(num))


def check(factorized_num):
    for i in range(2, factorized_num + 1):
        if all(x not in factorize(i) for x in factorize(factorized_num) if x != i):
            return str(factorized_num)


main()