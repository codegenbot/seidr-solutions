def rolling_max(numbers: List[int]) -> list:
    result = [numbers[0]]
    max_num = numbers[0]
    for num in numbers[1:]:
        if num > max_num:
            max_num = num
        result.append(max_num)
    return result