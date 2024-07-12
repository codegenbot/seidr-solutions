from typing import List


def below_zero() -> bool:
    temperature_list = list(map(int, input("Enter temperatures separated by space: ").split()))
    return any(temp < 0 for temp in temperature_list)