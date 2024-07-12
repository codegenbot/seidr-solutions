import ast

def flatten_list(sublist):
    if isinstance(sublist, list):
        return [item for sublist in sublist for item in flatten_list(item)]
    else:
        return [sublist]

input_list = ast.literal_eval(input("Enter a list of lists in proper Python list format: "))
print(flatten_list(input_list))