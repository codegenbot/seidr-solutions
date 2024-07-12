def remove_duplicates(input_numbers=None):
    if input_numbers is None:
        input_numbers = list(map(int, input("Enter numbers separated by space: ").split()))
    unique_numbers = []
    for num in set(input_numbers):
        unique_numbers.append(num)
    return unique_numbers