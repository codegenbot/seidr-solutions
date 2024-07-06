def find_closest_elements(numbers: list) -> Tuple[float, float]:
    # Sort the list of numbers in ascending order
    sorted_numbers = sorted(numbers)

    # Initialize the closest distance to the maximum possible value
    closest_distance = float("inf")

    # Initialize the indices of the two closest elements
    closest_indices = (0, 1)

    # Iterate over the sorted list of numbers
    for i in range(len(sorted_numbers) - 1):
        # Calculate the distance between the current number and the next number
        distance = abs(sorted_numbers[i] - sorted_numbers[i + 1])

        # If the distance is less than the closest distance, update the closest indices and distance
        if distance < closest_distance:
            closest_indices = (i, i + 1)
            closest_distance = distance

    # Return the two closest elements in order (smaller number, larger number)
    return (sorted_numbers[closest_indices[0]], sorted_numbers[closest_indices[1]])