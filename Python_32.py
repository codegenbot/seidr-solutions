def find_zero(x):
    return x == 0
def sort_integers(input_list):
    input_list.sort(key=find_zero)
    return input_list