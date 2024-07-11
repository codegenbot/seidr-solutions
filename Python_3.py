```Python
from typing import List

def below_zero() -> bool:
    while True:
        try:
            temperatures = list(map(int, input("Enter temperatures separated by spaces: ").split()))
            balance = 0
            for temp in temperatures:
                if temp < 0:
                    return False
                balance += temp
            return True
        except ValueError:
            print("Invalid input. Please enter only numbers separated by spaces.")