from typing import List


def below_zero() -> bool:
    while True:
        try:
            temperature_list = list(map(int, input("Enter temperatures separated by space: ").split()))
            if all(temp < 0 for temp in temperature_list):
                return True
            elif all(temp >= 0 for temp in temperature_list):
                return False
        except ValueError:
            print("Invalid input. Please enter temperatures separated by spaces.")