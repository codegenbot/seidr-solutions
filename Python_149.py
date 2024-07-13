```Python
from collections import OrderedDict

def sorted_list_sum(lst):
    strings = [s for s in lst if isinstance(s, str)]
    numbers = []
    for s in strings:
        for c in s:
            if c.isdigit():
                numbers.append(int(c))
    return list(OrderedDict.fromkeys(strings + map(str, numbers)))