def remove_duplicates(input_list=None):
    if input_list is None:
        numbers = map(int, input("Enter numbers separated by space: ").split())
        input_list = list(numbers)
    if not input_list:  
        return []  
    from collections import OrderedDict
    return list(OrderedDict.fromkeys(input_list))