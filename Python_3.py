from typing import List

def below_zero() -> bool:
    temperatures = list(map(int, input("Enter temperatures separated by spaces: ").split()))
    balance = 0
    for temp in temperatures:
        balance += temp
        if balance >= 0:
            return False
    return True

print(below_zero())