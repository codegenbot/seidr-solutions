def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    current_max = None
    for number in numbers:
        if current_max is None or number > current_max:
            current_max = number
        max_numbers.append(current_max)
    return max_numbers