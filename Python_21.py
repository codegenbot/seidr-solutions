from typing import List


def rescale_to_unit():
    numbers = list(map(float, input("Enter numbers separated by spaces: ").split()))
    return [(x - min(numbers)) / (max(numbers) - min(numbers)) for x in numbers]

print(rescale_to_unit())