"""
def remove_duplicates(input_str):
    numbers = list(map(int, input_str.split()))
    return [str(num) for num in set(numbers)]