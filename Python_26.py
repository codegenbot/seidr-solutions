```
def remove_duplicates(input_list=None):
    from collections import OrderedDict
    if input_list is None:
        values = ' '.join(input("Enter numbers separated by space: ").split())
        input_list = [int(value) for value in values.split()]
    if not input_list:  
        return []
    return list(OrderedDict.fromkeys(input_list))