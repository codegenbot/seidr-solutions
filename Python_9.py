def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_seen = numbers[0]
    for num in numbers:
        result.append(max(num, max_seen))
        max_seen = num
    return result