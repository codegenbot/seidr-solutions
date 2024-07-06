def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = numbers[0]
    for num in numbers:
        result.append(max_num)
        max_num = max(max_num, num)
    return result