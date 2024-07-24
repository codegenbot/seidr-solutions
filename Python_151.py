def double_the_difference(input_list):
    if len(input_list) < 2:
        return None
    first_diff = abs(input_list[0] - input_list[1])
    for i in range(1, len(input_list)-1):
        diff = abs(input_list[i] - input_list[i+1])
        if diff > first_diff:
            first_diff = diff
    return 2 * first_diff