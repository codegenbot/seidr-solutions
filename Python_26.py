```
def remove_duplicates(input_numbers):
    unique_numbers = list(set(map(str, input_numbers)))
    return [int(x) for x in unique_numbers]