def sorted_list_sum(input_data):
    return sum(int(''.join(sorted(str(x)))) for x in input_data)