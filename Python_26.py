def remove_duplicates(input_numbers=None):
    if input_numbers is None:
        input_numbers = list(map(int, input("Enter numbers separated by space: ").split()))
    unique_numbers = set(str(x) for x in input_numbers)
    return list(map(int, unique_numbers))