Here is the solution:

"""
Rescale a list of numbers to be between 0 and 1.
"""

def rescale_to_unit(numbers: List[float]) -> List[float]:
    return [(x - min(numbers)) / (max(numbers) - min(numbers)) for x in numbers]