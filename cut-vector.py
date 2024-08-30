def cut_vector(input_list):
    min_diff = float("inf")
    cut_point = 0

    for i in range(1, len(input_list)):
        diff = abs(np.mean(input_list[:i]) - np.mean(input_list[i:]))
        if diff < min_diff:
            min_diff = diff
            cut_point = i

    return input_list[:cut_point], input_list[cut_point:]