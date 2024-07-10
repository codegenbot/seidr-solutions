from typing import List


def factorize() -> List[str]:
    result = []
    n = int(input("Enter a number: "))
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            result.append(f"{i} is a factor with multiplicity {count}.")
    if n > 1:
        result.append(str(n) + " is a prime number.")
    return result


print(factorize())