def remove_duplicates(input_str=None):
    if input_str is None:
        numbers = input("Enter comma-separated numbers: ")
    else:
        numbers = str(input_str)
    return list(map(int, (num.strip() for num in numbers.split(","))))