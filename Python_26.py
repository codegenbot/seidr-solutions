def remove_duplicates(input_numbers=None):
    if input_numbers is None:
        input_str = input("Enter numbers separated by space: ")
        input_numbers = list(map(int, input_str.split()))
    unique_numbers = list(set(input_numbers))
    return sorted(unique_numbers)