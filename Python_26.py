def remove_duplicates(numbers):
    seen = set(numbers)
    return [x for x in numbers if x not in seen and not seen.add(x)]