def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    maximum = float("-inf")
    for num in numbers:
        maximum = max(maximum, num)
        result.append(maximum)
    return result