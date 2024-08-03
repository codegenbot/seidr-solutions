def cut_vector(input_list):
    min_diff = float("inf")
    split_index = 0

    for i in range(1, len(input_list)):
        diff = abs(sum(input_list[:i]) - sum(input_list[i:]))

        if diff < min_diff:
            min_diff = diff
            split_index = i

    return input_list[:split_index], input_list[split_index:]