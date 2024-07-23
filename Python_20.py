def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    if not isinstance(numbers, list):
        return "Invalid input. Please enter a list of numbers."

    if len(numbers) < 2:
        return "Please enter at least two numbers."
        
    min_diff = float("inf")
    closest_pair = ()

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[j] - numbers[i])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])

    return tuple(sorted(closest_pair))