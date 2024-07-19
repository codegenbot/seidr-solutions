def remove_duplicates(numbers):
    return [x for i, x in enumerate(numbers) if x not in numbers[:i]]