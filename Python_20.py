def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest = min(
        (abs(num1 - num2), (num1, num2))
        for num1 in numbers
        for num2 in numbers
        if num1 < num2
    )
    return closest[1]