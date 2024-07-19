def remove_duplicates(numbers):
    seen = set()
    result = []
    for x in numbers:
        if x not in seen:
            result.append(x)
            seen.add(x)
    return result