def interleave_numbers(numbers, delimiter):
    return [e for sublist in [[num, delimiter] for num in numbers] for e in sublist][
        :-1
    ]