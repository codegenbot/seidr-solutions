def add(input_list):
    total = 0
    for sublist in input_list:
        total += sum(sublist)
    return total