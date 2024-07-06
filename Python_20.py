
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    # sort the list of numbers in ascending order
    sorted_numbers = sorted(numbers)

    # initialize variables to keep track of the closest pair
    closest_pair = (sorted_numbers[0], sorted_numbers[1])
    min_diff = abs(closest_pair[0] - closest_pair[1])

    # loop through the rest of the list and find the closest pair
    for i in range(1, len(sorted_numbers) - 1):
        current_diff = abs(sorted_numbers[i] - sorted_numbers[i + 1])
        if current_diff < min_diff:
            min_diff = current_diff
            closest_pair = (sorted_numbers[i], sorted_numbers[i + 1])

    return closest_pair
