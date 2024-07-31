def rolling_max(numbers: List[int]) -> List[int]:
    maxes = []
    current_max = float("-inf")
    for num in numbers:
        maxes.append(max(current_max, num))
        current_max = max(current_max, num)
    return maxes