def rolling_max(numbers: List[int]) -> List[int]:
    result = [max_num := numbers[0]]
    for num in numbers[1:]:
        max_num = max(max_num, num)
        result.append(max_num)
    return result