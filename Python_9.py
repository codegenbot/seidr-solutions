def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    maximum = None
    for num in numbers:
        if maximum is None or num > maximum:
            maximum = num
        result.append(maximum)
    return result