def remove_duplicates(numbers: list[int]) -> list[int]:
    seen = set()
    return [x for x in numbers if not (seen.add(x) is None)]