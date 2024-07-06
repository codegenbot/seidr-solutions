def remove_duplicates(input_str=None):
    if input_str is None:
        numbers = input("Enter comma-separated numbers: ")
    else:
        numbers = str(input_str)
    if input_str is None:
        return list(dict.fromkeys(map(int, filter(lambda x: x.isdigit(), numbers.split(",")))))
    else:
        return list(dict.fromkeys(map(int, filter(lambda x: x.isdigit(), str(input_str).split(","))))))