def first_negative_index(my_list):
    for i in range(len(my_list)):
        if sum(my_list[:i+1]) < 0:
            return i