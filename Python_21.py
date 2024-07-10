def find_average(numbers):
    rescaled_numbers = rescale_to_unit(numbers)
    return [str(num) for num in rescaled_numbers]