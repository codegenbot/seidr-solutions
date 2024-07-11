from typing import List


def rescale_to_unit() -> List[float]:
    numbers = input("Enter space-separated numbers: ")
    
    try:
        numbers_list = [float(num) for num in numbers.split()]
    except ValueError:
        print("Invalid input. Please enter valid float values.")
        return []

    if len(numbers_list) == 0:
        return []  
    min_val = min(numbers_list)
    max_val = max(numbers_list)
    
    return [(x - min_val) / (max_val - min_val) for x in numbers_list]