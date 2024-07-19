def rolling_max(ranges: List[Tuple[int, int]]) -> List[int]:
    result = []
    max_num = float("-inf")
    for start, end in ranges:
        current_max = max(max_num, start, end)
        result.append(current_max)
    return result