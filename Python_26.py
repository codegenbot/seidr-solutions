```
def remove_duplicates(numbers: list[int]) -> list[int]:
    seen = {}
    return [seen.setdefault(x, x) for x in numbers if x not in seen]