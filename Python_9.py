def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = numbers[0]
    result.append(max_num)
    for num in numbers[1:]:
        if num > max_num:
            max_num = num
        result.append(max_num)
    return result