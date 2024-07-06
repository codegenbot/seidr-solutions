def remove_duplicates(numbers):
    return [x for x in set(numbers) if numbers.count(x) == 1]