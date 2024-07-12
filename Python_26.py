```
def remove_duplicates(input_numbers=None):
    if input_numbers is None:
        input_str = input("Enter numbers separated by space: ")
        input_numbers = list(map(int, input_str.split()))
    unique_numbers = [x for i, x in enumerate(input_numbers) if x not in input_numbers[:i]]
    return unique_numbers