def double_the_difference(first_list, second_list):
    if not first_list or not second_list:
        return 0
    absolute_diff = abs(sum(first_list) - sum(second_list))
    return absolute_diff * 2