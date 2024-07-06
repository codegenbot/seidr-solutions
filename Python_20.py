def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    # Sort the list in ascending order
    numbers.sort()

    # Initialize variables to keep track of closest pair and their distance
    closest_pair = (0.0, 0.0)
    min_distance = float("inf")

    # Iterate over the sorted list
    for i in range(len(numbers) - 1):
        # Calculate the distance between the current number and its successor
        distance = numbers[i + 1] - numbers[i]

        # Update closest pair and their distance if necessary
        if distance < min_distance:
            closest_pair = (numbers[i], numbers[i + 1])
            min_distance = distance

    return closest_pair