```
def rescale_to_unit(numbers):
    return [(x - min(numbers)) / (max(numbers) - min(numbers)) for x in numbers]