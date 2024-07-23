```
def remove_duplicates(input_str):
    numbers = list(map(int, input_str.split()))
    return list(set(numbers))