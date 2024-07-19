def remove_duplicates(numbers):
    unique_numbers = []
    seen = set()
    for x in numbers:
        if x not in seen:
            seen.add(x)
            unique_numbers.append(x)
    return unique_numbers