def sum_squares(input_list):
    total_sum = 0
    for num in input_list:
        if isinstance(num, int):
            total_sum += num**2
        else:
            raise ValueError("The list must contain only integers.")
    return total_sum