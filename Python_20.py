```
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    closest_pair = (min(numbers), max(numbers))
    for num1 in numbers:
        for num2 in numbers:
            if abs(num1 - num2) < abs(closest_pair[0] - closest_pair[1]):
                closest_pair = (min(num1, num2), max(num1, num2))
    return tuple(sorted(closest_pair))