from collections import OrderedDict

def remove_duplicates(input_list=None):
    if input_list is None:
        values = input("Enter numbers separated by space: ")
        input_list = [int(value) for value in values.split()]
    if not input_list:  
        return []  
    return list(OrderedDict.fromkeys(input_list))