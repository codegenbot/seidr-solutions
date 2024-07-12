```Python
from typing import List


def below_zero() -> bool:
    while True:
        temperature_list = list(
            map(int, input("Enter temperatures separated by space: ").split())
        )

        if not all(isinstance(temp, int) and temp < 1000 for temp in temperature_list):
            print("Invalid input. Please try again. Enter numbers less than 1000.")
            continue

        if all(temp < 0 for temp in temperature_list):
            return True
        elif all(temp >= 0 for temp in temperature_list):
            return False