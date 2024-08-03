def rescale_to_unit(numbers):
    return [(n - min(numbers)) / (max(numbers) - min(numbers)) for n in numbers]