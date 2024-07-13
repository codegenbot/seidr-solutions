```
from collections import OrderedDict

def remove_duplicates(numbers):
    return sorted(list(OrderedDict.fromkeys(map(int, numbers))))