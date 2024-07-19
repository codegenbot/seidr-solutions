def remove_duplicates(numbers):
    seen = set()
    return list(dict.fromkeys(numbers))