Here is the solution:

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return tuple(sorted(set(numbers), key=abs, reverse=True)[:2])