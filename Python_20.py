Here is the solution:

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return tuple(sorted((x for x in numbers), key=lambda y: min(abs(y-x) for x in numbers)))[1:-1]