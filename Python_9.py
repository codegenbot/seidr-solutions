def rolling_max(numbers: List[int]) -> List[int]:
    maxes = []
    current_max = float("-inf")
    for num in numbers:
        if num > current_max:
            current_max = num
        maxes.append(current_max)
    return maxes