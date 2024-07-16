def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_ = numbers[0]
    for num in numbers:
        result.append(max_)
        if num > max_:
            max_ = num
    return result