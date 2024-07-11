```
from typing import List

def below_zero() -> bool:
    while True:
        temperatures = list(map(int, input("Enter temperatures separated by spaces: ").split()))
        if any(temp < 0 for temp in temperatures):
            return True
        elif input("Continue? (yes/no): ") != 'yes':
            return False

print(below_zero())