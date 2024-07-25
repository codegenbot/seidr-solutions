def remove_duplicates(numbers: list[int]) -> list[int]:
    seen = set()
    result = [x for x in numbers if not (seen.add(x), x in seen)]
    return list(result)