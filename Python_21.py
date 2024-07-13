"""
def rescale_to_unit(numbers):
    if not isinstance(numbers, list):
        raise TypeError("Input is not a list")
    
    if len(numbers) == 0:
        return []
        
    min_value = min(numbers)
    max_value = max(numbers)
    
    return [(x - min_value) / (max_value - min_value) for x in numbers]
"""