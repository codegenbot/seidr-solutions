def find_max_min(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return None, None
    max_num = min_num = numbers[0]
    for num in numbers:
        if num > max_num:
            max_num = num
        elif num < min_num:
            min_num = num
    return min_num, max_num