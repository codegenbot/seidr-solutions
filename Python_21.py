def rescale_to_unit(numbers):
    min_val = min(numbers)
    max_val = max(numbers)

    return [(num - min_val) / (max_val - min_val) for num in numbers]

def find_average(numbers):
    normalized_numbers = rescale_to_unit(numbers)
    return ["{:.1f}".format(num) for num in normalized_numbers]