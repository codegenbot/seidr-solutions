```
from collections import OrderedDict
def remove_duplicates(numbers: list[int]) -> list[int]:
    seen = OrderedDict()
    return [seen.setdefault(x, x) for x in numbers if x not in seen]