```Python
from typing import List

def below_zero() -> bool:
    operations = list(map(int, input("Enter integers separated by spaces: ").split()))
    below_zero_readings = [op for op in operations if op < 0]
    return len(below_zero_readings) > 0

print(below_zero())