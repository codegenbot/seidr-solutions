def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    duplicates = set(x for x in numbers if x in seen or seen.add(x))
    return [x for x in numbers if x not in duplicates]