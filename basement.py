def basement(input_list):
    for i in range(len(input_list)):
        if sum(input_list[: i + 1]) < 0:
            return i
    return -1