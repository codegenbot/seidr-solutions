def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    # Sort the list in ascending order
    numbers.sort()

    # Initialize variables to keep track of the closest elements
    closest_smaller = None
    closest_larger = None

    # Iterate over the sorted list and find the closest elements
    for i in range(len(numbers) - 1):
        if numbers[i + 1] - numbers[i] < numbers[i] - numbers[i - 1]:
            closest_smaller = numbers[i]
            closest_larger = numbers[i + 1]

    return (closest_smaller, closest_larger)