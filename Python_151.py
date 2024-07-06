def double_the_difference(numbers):
    min_num = min(num for num in numbers if isinstance(num, int) and num > 0)
    max_num = max(num for num in numbers if isinstance(num, int) and num % 2 != 0)
    return abs(min_num - max_num) * 2