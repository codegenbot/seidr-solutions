def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_seen = float("-inf")
    for num in numbers:
        result.append(max(num, max_seen))
        max_seen = num
    return result