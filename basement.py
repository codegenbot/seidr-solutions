def basement(input_list):
    for i in range(len(input_list)):
        current_sum = sum(input_list[: i + 1])
        if current_sum < 0:
            return i
    return -1