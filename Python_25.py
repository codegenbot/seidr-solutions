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


def check(factorized_num):
    for i in range(2, factorized_num + 1):
        if all(x not in factorize(i) or x == i for x in factorized_num):
            return str(i)


def main():
    num = int(input("Enter a number: "))
    print(str(check(num)))


main()