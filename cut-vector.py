def cut_vector(input_list):
    left = right = 0
    min_diff = float("inf")

    for i in range(1, len(input_list)):
        if input_list[i] - input_list[0] < min_diff:
            min_diff = input_list[i] - input_list[0]
            left = i

    return input_list[:left], input_list[left:]