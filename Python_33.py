def flatten_list(list_of_lists):
    return (
        [item for sublist in list_of_lists for item in flatten_list(sublist)]
        if any(isinstance(sublist, list) for sublist in list_of_lists)
        else [list_of_lists]
    )


try:
    input_list = eval(input())
    if not all(isinstance(sublist, list) for sublist in input_list):
        raise ValueError("Input should be a list of lists.")
    print(flatten_list(input_list))
except (ValueError, NameError, SyntaxError):
    print("Invalid input. Please enter a valid list of lists.")