def rolling_max(numbers: List[int]) -> List[int]:
    if not numbers:
        return []
    result = [max(numbers[i:]) for i in range(len(numbers))]
    return result