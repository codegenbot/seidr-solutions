from collections import OrderedDict

def remove_duplicates(numbers: list[int]) -> list[int]:
    seen = OrderedDict()
    result = []
    for num in numbers:
        if num not in seen:
            seen[num] = None
            result.append(num)
    return result