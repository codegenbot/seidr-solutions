from collections import OrderedDict

def remove_duplicates(input_numbers=None):
    if input_numbers is None:
        input_str = input("Enter numbers separated by space: ")
        input_numbers = [int(num) for num in input_str.replace('-', '').replace('+', '').split()]
    return sorted(list(OrderedDict.fromkeys(input_numbers)))