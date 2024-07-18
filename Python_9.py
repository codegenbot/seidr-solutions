def rolling_max(numbers):
    max_num = 0
    max_numbers = []
    for num in numbers:
        max_num = max(num, max_num)
        max_numbers.append(max_num)
    return max_numbers