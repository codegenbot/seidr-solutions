def remove_duplicates(input_str=None):
    if input_str is None:
        numbers = input("Enter comma-separated numbers: ")
    else:
        numbers = input_str
    return list(dict.fromkeys(map(int, numbers.split(","))))