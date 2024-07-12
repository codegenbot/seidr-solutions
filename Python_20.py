```
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers = sorted(set(numbers))  # Remove duplicates and sort
    closest_pair = (numbers[0], numbers[1])
    min_diff = abs(*closest_pair)  # Calculate the difference between the two numbers in the pair

    for i in range(len(numbers) - 1):
        diff = abs(numbers[i] - numbers[i + 1])
        if diff < min_diff:
            closest_pair = (numbers[i], numbers[i + 1])  # Update the closest pair
            min_diff = diff

    return tuple(sorted(closest_pair))  # Return the pair in order