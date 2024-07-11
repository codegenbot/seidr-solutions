Here is the completed code:

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return min((num1, num2) for num1 in numbers for num2 in numbers if num1 < num2), max((num1, num2) for num1 in numbers for num2 in numbers if num1 < num2)