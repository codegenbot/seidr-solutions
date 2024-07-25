def remove_duplicates(numbers: list[int]) -> list[int]:
    seen = set()
    return [seen.add(x) or x for x in numbers if x not in seen]