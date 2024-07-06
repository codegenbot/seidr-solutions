def remove_duplicates(input_str=""): 
    numbers = input(input_str + "Enter comma-separated numbers: ") or input_str
    return list(set(map(int, numbers.split(","))))