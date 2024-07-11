```
from typing import List

def below_zero() -> bool:
    temperatures = list(map(int, input("Enter temperatures separated by spaces: ").split()))
    for temp in temperatures:
        if temp >= 0:
            return False
    return True

print(below_zero())