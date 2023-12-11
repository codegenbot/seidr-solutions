def get_negative_sum_index(my_list):
    current_sum = 0
    for i in range(len(my_list)):
        current_sum += my_list[i]
        if current_sum < 0:
            return i
    return -1