def double_the_difference(input_list):
    total = 0
    for num in input_list:
        if isinstance(num, int) and num >= 0:
            total += num**2
    return total