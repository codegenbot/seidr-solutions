```
from typing import List

def below_zero() -> bool:
    while True:
        temperatures = list(map(int, input("Enter temperatures separated by spaces: ").split()))
        balance = 0
        for temp in temperatures:
            balance += temp
            if balance >= 0:
                print("Invalid inputs. Try again.")
                break
        else:
            return False

print(below_zero())