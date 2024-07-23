def remove_duplicates(input_str):
    numbers = list(map(int, input_str.split()))
    return ",".join(str(num) for num in set(numbers))