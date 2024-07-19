def rolling_max(numbers: List[int]) -> List[int]:
    max_num = numbers[0]
    rolling_max_list = [max_num]
    for num in numbers[1:]:
        max_num = max(max_num, num)
        rolling_max_list.append(max_num)
    return rolling_max_list