def remove_duplicates(numbers: list[int]) -> list[int]:
    seen = set()
    result = [x for x in numbers if not (x in seen or seen.add(x))]
    return list(result)