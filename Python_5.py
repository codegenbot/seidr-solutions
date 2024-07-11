def concatenate_numbers_with_delimeter(numbers, delimeter):
    return [
        val for sublist in [[num, delimeter] for num in numbers] for val in sublist
    ][:-1]