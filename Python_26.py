from collections import OrderedDict

def remove_duplicates(input_list=None):
    if input_list is None:
        while True:
            try:
                input_list = list(map(int, input("Enter numbers separated by space: ").split()))
                break
            except ValueError:
                print("Invalid input. Please enter numbers only.")
    if not input_list:  
        return []  
    return list(OrderedDict.fromkeys(input_list))