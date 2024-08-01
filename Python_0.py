def check_numbers(numbers_list, threshold_value):
    numbers_list.sort()
    for i in range(len(numbers_list) - 1):
        if abs(numbers_list[i] - numbers_list[i + 1]) < threshold_value:
            return True
    return False