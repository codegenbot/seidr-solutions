from typing import List
from collections import OrderedDict

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(map(int, input("Enter numbers separated by space:\n").split())))

```