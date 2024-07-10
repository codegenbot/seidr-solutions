from typing import List


def factorize(num):
    i = 2
    factors = []
    while i * i <= num:
        if num % i:
            i += 1
        else:
            num //= i
            factors.append(i)
    if num > 1:
        factors.append(num)
    return set(factors)


def main():
    print(check(factorize, int(input("Enter a number: "))))


print(main())