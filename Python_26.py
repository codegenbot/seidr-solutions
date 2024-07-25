```
from collections import OrderedDict

def remove_duplicates(numbers: list[int]) -> list[int]:
    seen = OrderedDict()
    result = [seen.setdefault(x, x) for x in set(numbers)]
    return list(result)