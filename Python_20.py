Here is the completed Python function:

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return min((i, j) for i in numbers for j in numbers if i != j), max(min(((i, j) for i in numbers for j in numbers if i != j)), key=lambda x: abs(x[0]-x[1]))