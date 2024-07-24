def find_max_value(lst: List[int]) -> int:
    max_val = float("-inf")
    for num in lst:
        if num > max_val:
            max_val = num
    return max_val