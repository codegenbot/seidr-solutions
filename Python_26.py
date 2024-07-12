```
def remove_duplicates(input_numbers): 
    unique_numbers = {}

    for num in input_numbers:
        unique_numbers[num] = None

    return sorted(list(unique_numbers.keys()))