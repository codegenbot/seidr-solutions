```
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return tuple(sorted((abs(x - min(numbers)), x) for x in numbers)[1].values)