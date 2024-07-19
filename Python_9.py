def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    maximum = None
    for num in numbers:
        maximum = max(maximum, num) if maximum is not None else num
        result.append(maximum)
    return result