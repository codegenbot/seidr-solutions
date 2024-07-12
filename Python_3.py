```
from typing import List


def below_zero() -> bool:
    temperature_input = input("Enter temperatures separated by space: ")
    temperature_list = list(map(int, temperature_input.split()))
    
    if temperature_list:
        return any(temp < 0 for temp in temperature_list)
    else:
        return False