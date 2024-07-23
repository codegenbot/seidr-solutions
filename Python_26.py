def remove_duplicates(input_str):
    numbers = [int(num) for num in input_str]
    return ",".join(str(num) for num in set(numbers))