def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    closest_pair = (min(numbers), max(numbers))
    min_distance = abs(max(numbers) - min(numbers))

    for num1 in numbers:
        for num2 in numbers:
            if num1 != num2 and abs(num2 - num1) < min_distance:
                closest_pair = (min(num1, num2), max(num1, num2))
                min_distance = abs(max(num1, num2) - min(num1, num2))

    return *sorted(closest_pair)