```python
from typing import List

def below_zero(temperatures: List[int]) -> bool:
    for temp in temperatures:
        if temp >= 0:
            return False
    return True

print(below_zero(list(map(int, input("Enter temperatures separated by spaces: ").split()))))