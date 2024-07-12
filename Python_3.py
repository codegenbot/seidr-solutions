from typing import List


def below_zero(temperature_list: List[int]) -> None:
    if any(temp < 0 for temp in temperature_list):
        print("There are temperatures below zero.")
    else:
        print("All temperatures are above or equal to zero.")