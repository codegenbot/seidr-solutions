from collections import OrderedDict

def remove_duplicates(numbers: list[int]) -> list[int]:
    seen = OrderedDict()
    result = [seen.setdefault(x, x) for x in numbers if not seen.get(x)]
    return list(result)