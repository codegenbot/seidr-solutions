from collections import OrderedDict

def remove_duplicates(input_numbers=None):
    if input_numbers is None:
        while True:
            try:
                input_str = input("Enter numbers separated by space: ")
                input_numbers = list(map(int, filter(str.isdigit, input_str.split())))
                break
            except ValueError:
                print("Invalid input. Please enter valid numbers.")
                continue 
    return sorted(list(OrderedDict.fromkeys(input_numbers)))