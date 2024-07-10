from typing import List


def factorize(n: int) -> None:
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            print(f"{i} is a factor with multiplicity {count}.")
    if n > 1:
        print(f"{n} is a prime number.")
    return


if __name__ == "__main__":
    factorize(int(input("Enter a number: ")))