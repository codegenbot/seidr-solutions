from collections import OrderedDict

def remove_duplicates(input_numbers=None):
    if input_numbers is None:
        input_str = input("Enter numbers separated by space: ")
        input_numbers = list(map(int, filter(str.isdigit, input_str.split())))
    return sorted(list(OrderedDict.fromkeys(input_numbers)))