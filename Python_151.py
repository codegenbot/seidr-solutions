def double_the_difference(first_list, second_list):
    total = 0
    for num in first_list[0]:
        if isinstance(num, int) and num >= 0:
            total += num**2
    return abs(total - sum(second_list)) // len(second_list) * 2