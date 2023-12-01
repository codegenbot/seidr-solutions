def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    sorted_numbers = sorted(numbers)
    closest = (sorted_numbers[0], sorted_numbers[1])
    for i in range(len(sorted_numbers)-1):
        if sorted_numbers[i+1] - sorted_numbers[i] < closest[1] - closest[0]:
            closest = (sorted_numbers[i], sorted_numbers[i+1])
    return closest