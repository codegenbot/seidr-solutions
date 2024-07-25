```
def remove_duplicates(numbers: list[int]) -> list[int]:
    seen = set()
    return [x for x in numbers if (seen.add(x) or True)]