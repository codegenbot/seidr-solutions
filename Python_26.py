def remove_duplicates(input_list=None):
    if input_list is None:
        input_list = list(map(int, input("Enter numbers separated by space: ").split()))
    if not input_list:  
        return []  
    from collections import OrderedDict
    result = list(OrderedDict.fromkeys(input_list))
    print(len(result))