def process_numbers(numbers, delimiter):
    return [
        item for sublist in [[num, delimiter] for num in numbers] for item in sublist
    ][:-1]