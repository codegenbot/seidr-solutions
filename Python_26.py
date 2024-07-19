def remove_duplicates(numbers):
    seen = set()
    return [x for x in numbers if not (x in seen or seen.add(x))]