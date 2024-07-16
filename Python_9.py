def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_seen = numbers[0]
    for num in numbers:
        if num > max_seen:
            max_seen = num
        result.append(max_seen)
    return result