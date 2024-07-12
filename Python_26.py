def remove_duplicates(input_numbers):
    unique_numbers = []

    for num in input_numbers:
        if num not in unique_numbers:
            unique_numbers.append(num)

    return unique_numbers