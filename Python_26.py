def remove_duplicates(numbers: list) -> list:
    unique = set()
    result = []
    for num in numbers:
        if num not in unique:
            result.append(num)
            unique.add(num)
    return result