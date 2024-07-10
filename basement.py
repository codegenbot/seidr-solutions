def basement(input_list):
    total = 0
    for i in range(len(input_list)):
        total += input_list[i]
        if total < 0:
            return i
    return -1