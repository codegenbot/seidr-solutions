from typing import List

def below_zero() -> bool:
    while True:
        temperatures = list(map(int, input("Enter temperatures separated by spaces: ").split()))
        if any(temp >= 0 for temp in temperatures):
            return False
        else:
            print("All temperatures are below zero. Please enter again.")

print(below_zero())