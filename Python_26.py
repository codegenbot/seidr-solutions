def remove_duplicates(input_list):
    return sorted(list(set(map(int, input_list.split(",")))))