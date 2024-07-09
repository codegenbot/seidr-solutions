def rolling_max(numbers: List[int]) -> List[int]:
    if not numbers:
        return []

    result = [max(x) for x in zip(*[numbers[i:] for i in range(len(numbers))])]

    return result