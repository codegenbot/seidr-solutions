def remove_duplicates(input_str):
    numbers = [int(num) for num in input_str[0].split()]
    return ",".join(str(num) for num in set(numbers))