```
from typing import List

def below_zero() -> bool:
    temperatures = list(map(int, input("Enter temperatures separated by spaces: ").split()))
    if any(temp < 0 for temp in temperatures):
        return True
    else:
        return False

print(below_zero())