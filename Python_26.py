```Python
def remove_duplicates(input_str=None):
    if input_str is None:
        numbers = input("Enter comma-separated numbers: ")
    else:
        numbers = str(input_str)
    return list(set(map(int, filter(lambda x: x.isdigit(), numbers.split(",")))))