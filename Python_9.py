def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_ = numbers[0]
    for num in numbers:
        if num > max_:
            max_ = num
        result.append(max_)
    return result