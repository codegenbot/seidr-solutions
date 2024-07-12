def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    sorted_numbers = sorted(numbers)
    closest_pair = min(
        [
            (sorted_numbers[i], sorted_numbers[i + 1])
            for i in range(len(sorted_numbers) - 1)
        ],
        key=lambda x: x[1] - x[0],
    )
    return closest_pair