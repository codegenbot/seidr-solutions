def sorted_list_sum(input_data):
    return [''.join(sorted(x)) for x in sorted(input_data, key=len)]