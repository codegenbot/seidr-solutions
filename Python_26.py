def remove_duplicates():
    input_numbers = list(map(int, input("Enter numbers separated by space: ").split()))
    unique_numbers = list(set(map(str, input_numbers)))
    return [int(x) for x in unique_numbers]