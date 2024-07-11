```
from typing import List
from collections import OrderedDict


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(OrderedDict.fromkeys(numbers))