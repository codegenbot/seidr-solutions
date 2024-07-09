def basement(input_list):
    total_sum = 0
    for i in range(len(input_list)):
        total_sum += input_list[i]
        if total_sum < 0:
            return i
    return -1