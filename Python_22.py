from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if type(x) == int]

values = input().split()
values = [eval(x) for x in values]
print(filter_integers(values))