Here is the solution:

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return min((n1, n2) for n1 in numbers for n2 in numbers if n1 < n2), max(min(x) for x in ((n1, n2) for n1 in numbers for n2 in numbers if n1 < n2))