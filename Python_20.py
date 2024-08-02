Here is the completed code:

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return min((abs(x - y), x, y) for x in numbers for y in numbers if x != y), (x, y)[0], (x, y)[1]