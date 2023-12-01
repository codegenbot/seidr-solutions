def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_number = float("-inf")
    for number in numbers:
        max_number = max(max_number, number)
        result.append(max_number)
    return result