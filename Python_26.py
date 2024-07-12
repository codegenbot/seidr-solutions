from collections import OrderedDict

def remove_duplicates():
    while True:
        try:
            input_str = input("Enter numbers separated by space: (e.g. 1 2 3) ")
            if not input_str.strip(): 
                print("Please enter some numbers.")
                continue
            input_numbers = list(map(int, filter(str.isdigit, input_str.split())))
            break
        except ValueError:
            print("Invalid input. Please enter valid numbers.")
    return sorted(list(OrderedDict.fromkeys(input_numbers)))