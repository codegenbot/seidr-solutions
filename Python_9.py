def rolling_max(numbers: list[int]) -> list[int]:
    result = [max(range(1, i+1)) for i in range(len(numbers))]
    return result