from typing import Tuple


def sum_product():
    numbers = list(map(int, input("Enter a series of space-separated integers: ").split()))
    return sum(numbers), eval("*".join(map(str, numbers)))


sum_product()