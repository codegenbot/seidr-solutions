def find_max(numbers: List[int]) -> int:
    max_num = 0
    for num in numbers:
        if num > max_num:
            max_num = num
    return max_num