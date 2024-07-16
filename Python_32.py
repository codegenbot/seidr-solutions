def find_zero(element):
    return element == 0

def sort_integers(input_list):
    input_list.sort(key=lambda x: find_zero(x))
    return input_list