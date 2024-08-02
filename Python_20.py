```
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    closest = None
    for x in numbers:
        for y in numbers:
            if x != y:
                dist = abs(x - y)
                if closest is None or dist < closest[0]:
                    closest = (dist, x, y)
    return closest[1], closest[2]