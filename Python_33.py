import ast

def flatten_list(list_of_lists):
    if isinstance(list_of_lists, list):
        return [item for sublist in list_of_lists for item in flatten_list(sublist)]
    else:
        return [list_of_lists] if not isinstance(list_of_lists, list) else flatten_list(list_of_lists)

input_list = ast.literal_eval(input("Enter a list of lists in proper Python list format: "))
print(flatten_list(input_list))