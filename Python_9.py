def rolling_max(numbers: List[int]) -> List[int]:
    if not numbers:
        return []
    max_so_far = current_max = max(numbers)
    result = [current_max]
    for num in numbers[1:]:
        current_max = max(num, current_max)
        if current_max > max_so_far:
            max_so_far = current_max
        result.append(current_max)
    return result