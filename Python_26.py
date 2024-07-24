from collections import OrderedDict

def remove_duplicates(numbers: list[int]) -> list[int]:
    return list(OrderedDict.fromkeys(numbers))