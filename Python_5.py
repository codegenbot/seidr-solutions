def intersperse(numbers, delimiter):
    return [
        value for pair in zip(numbers, [delimiter] * len(numbers)) for value in pair
    ]


def process_numbers(numbers, delimiter):
    return intersperse(numbers, delimiter)