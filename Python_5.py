def fix_code(numbers, delimiter):
    return [
        item for sublist in zip(numbers, [delimiter] * len(numbers)) for item in sublist
    ]