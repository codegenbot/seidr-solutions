from typing import List


def rescale_to_unit():
    numbers = [
        float(x) for x in input("Enter the numbers separated by space: ").split()
    ]
    return [(x - min(numbers)) / (max(numbers) - min(numbers)) for x in numbers]


print(rescale_to_unit())