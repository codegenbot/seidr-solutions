```Python
def remove_duplicates(numbers: list[int]) -> list[int]:
    seen = set()
    result = [seen.add(x) or x for x in numbers if x not in seen]
    return list(result)