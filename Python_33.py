import ast

def flatten_list(list_of_lists):
    result = []
    if isinstance(list_of_lists, list):
        for sublist in list_of_lists:
            if isinstance(sublist, list):
                result.extend(flatten_list(sublist))
            else:
                result.append(sublist)
    else:
        result.append(list_of_lists)
    return result

input_list = ast.literal_eval(input("Enter a list of lists in proper Python list format: "))
print(flatten_list(input_list))