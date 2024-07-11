from typing import List

def has_below_zero_temps() -> bool:
    while True:
        temperatures = list(map(int, input("Enter temperatures separated by spaces: ").split()))
        if any(temp < 0 for temp in temperatures):
            return True
        else:
            return False

print(has_below_zero_temps())