def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    maximum = None
    for number in numbers:
        if maximum is None or number > maximum:
            maximum = number
        result.append(maximum)
    return result