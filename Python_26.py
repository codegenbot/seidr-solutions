```
def remove_duplicates(input_str=None):
    if input_str is None:
        numbers = input("Enter comma-separated numbers: ")
    else:
        numbers = str(input_str)
    return list(map(int, [str(x) for x in set(numbers.replace(" ", "").split(","))]))