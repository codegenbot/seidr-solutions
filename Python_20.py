```python
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    pairs = [(a, b) for a in numbers for b in numbers if a < b]
    min_diff = min(b - a for a, b in pairs)
    return min(pairs), (min(pairs)[0] + min(pairs)[1], min_diff)