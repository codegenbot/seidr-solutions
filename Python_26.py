def remove_duplicates(input_str=None):
    if input_str is None:
        numbers = input("Enter comma-separated numbers: ")
    else:
        numbers = ",".join(map(str, input_str))
    if isinstance(input_str, list):
        return list(set(input_str))
    else:
        return list(set(map(int, numbers.split(","))))