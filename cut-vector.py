def cut_vector(input_list):
    if len(input_list) == 1:
        return [input_list], []

    min_diff = float("inf")
    split_index = -1

    for i in range(1, len(input_list)):
        left_sum = sum(input_list[:i])
        right_sum = sum(input_list[i:])

        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            split_index = i

    return input_list[:split_index], input_list[split_index:]