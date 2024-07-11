from typing import List

def below_zero() -> bool:
    while True:
        try:
            temperatures = list(map(int, input("Enter temperatures separated by spaces: ").split()))
            break
        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")
    
    if any(temp < 0 for temp in temperatures):
        return True
    else:
        return False

print(below_zero())