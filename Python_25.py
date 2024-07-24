from typing import List


def factorize(num: int = int(input("Enter a number: "))) -> List[List[int]]:
    factors = []
    i = 2
    while i * i <= num:
        if num % i:
            i += 1
        else:
            num //= i
            count = 0
            while num % i == 0:
                num //= i
                count += 1
            factors.append([i] * count)
    if num > 1:
        factors.append([[num]])
    return [factor_list for factor_list in set(tuple(factor) for factor in set(map(tuple, factors)))]