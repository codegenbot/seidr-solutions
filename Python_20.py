Here is the completed code:

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return tuple(sorted(set(numbers))[-1], sorted(set(numbers))[0] if len(set(numbers)) > 1 else numbers[0])