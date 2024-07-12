import ast

def flatten_list(list_of_lists):
    if isinstance(list_of_lists, list):
        return [item for sublist in list_of_lists for item in flatten_list(sublist)]
    else:
        return [list_of_lists]

try:
    input_list = ast.literal_eval(input("Enter a list of lists in proper Python list format: "))
    if not all(isinstance(sublist, list) for sublist in input_list):
        raise ValueError("Input should be a list of lists.")
    print(flatten_list(input_list))
except (ValueError, SyntaxError):
    print("Invalid input. Please enter a valid list of lists.")