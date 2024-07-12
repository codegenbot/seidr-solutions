from typing import List


def below_zero(temperature_list: List[int]) -> bool:
    return any(temp < 0 for temp in temperature_list)