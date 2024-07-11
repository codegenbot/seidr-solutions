Here is the completed code:

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest = min((abs(j-i), (i,j)) for i, j in zip(numbers, numbers[1:]))
    return closest[1]