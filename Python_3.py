```Python
from typing import List

def below_zero() -> bool:
    temperatures = list(map(int, input("Enter temperatures separated by spaces: ").split()))
    max_temp = max(temperatures)
    min_temp = min(temperatures)
    average_temp = (max_temp - min_temp) / (len(temperatures) - 1)
    
    return average_temp <= 0

print(below_zero())