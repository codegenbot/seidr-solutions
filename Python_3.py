from typing import List

def below_zero() -> bool:
    while True:
        temperatures = list(map(int, input("Enter temperatures separated by spaces: ").split()))
        if all(temp < 0 for temp in temperatures):
            return True
        else:
            print("All temperatures are not below zero. Please enter again.")

print(below_zero())