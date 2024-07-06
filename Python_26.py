```
from collections import OrderedDict

def remove_duplicates(numbers) -> list:
    return list(OrderedDict.fromkeys(numbers))