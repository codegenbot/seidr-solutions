```
from typing import List

def below_zero() -> bool:
    while True:
        temperatures = list(map(int, input("Enter temperatures separated by spaces: ").split()))
        if any(temp >= 0 for temp in temperatures):
            print("Temperature must be below zero.")
        else:
            return True
        break

print(below_zero())