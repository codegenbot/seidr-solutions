def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    max_number = None
    for number in numbers:
        if max_number is None or number > max_number:
            max_number = number
        max_numbers.append(max_number)
    return max_numbers