def remove_duplicates(numbers):
    seen = set()
    result = [x for x in numbers if not (x in seen or seen.add(x))]
    return result