def double_the_difference(input_list):
    if len(input_list) < 2:
        return 0
    avg = sum(input_list) / len(input_list)
    diff = abs(max(input_list) - min(input_list)) - abs(avg - min(input_list))
    return 2 * diff