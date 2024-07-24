```
def remove_duplicates(input_list=None):
    from collections import OrderedDict
    if input_list is None:
        values = input("Enter numbers separated by space: ").strip()
        try:
            input_list = [int(value) for value in values.split()]
        except ValueError:
            return "Invalid Input. Please enter only integers."
    if not input_list:  
        return []  
    return list(OrderedDict.fromkeys(input_list))