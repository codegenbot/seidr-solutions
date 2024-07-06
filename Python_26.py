def remove_duplicates(input_str=None):
    if input_str is None:
        numbers = input("Enter comma-separated numbers: ")
    else:
        numbers = str(input_str)
    flat_list = [item for sublist in eval(f"['{numbers}']") for item in sublist]
    return list(map(int, set(map(str, flat_list).replace(" ", "").split(","))))