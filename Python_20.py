def find_closest_elements(numbers: list[float]) -> tuple[float, float]:
    pairs = [(x, y) for x in numbers for y in numbers if x < y]
    sorted_pairs = sorted(pairs, key=lambda pair: abs(pair[1] - pair[0]))
    return sorted_pairs[0]