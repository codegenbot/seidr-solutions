def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_seen = float("-inf")
    for num in numbers:
        max_seen = max(max_seen, num)
        result.append(max_seen)
    return result