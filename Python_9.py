def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_ = numbers[0]
    for num in numbers:
        result.append(max_)
        max_ = max(num, max_)
    return result