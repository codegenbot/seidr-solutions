def remove_duplicates(numbers):
    seen = []
    return [x for x in numbers if x not in seen and not seen.append(x)]