Here is the solution:

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return tuple(sorted((x, y) for x in numbers for y in numbers if x != y)[0][0], sorted((x, y) for x in numbers for y in numbers if x != y)[0][1])