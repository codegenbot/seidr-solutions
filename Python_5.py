def process_numbers(numbers, delimiter):
    return [val for sublist in [[num, delimiter] for num in numbers] for val in sublist][:-1]