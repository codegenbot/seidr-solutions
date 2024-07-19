def remove_duplicates(numbers: list) -> list:
    unique_numbers = []
    seen = set()
    for x in numbers:
        if x not in seen:
            unique_numbers.append(x)
            seen.add(x)
    return unique_numbers