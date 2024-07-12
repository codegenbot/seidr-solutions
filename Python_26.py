```Python
def remove_duplicates(input_numbers=None):
    if input_numbers is None:
        input_numbers = list(map(int, input("Enter numbers separated by space: ").split()))
    if len(input_numbers) == 0:
        return input_numbers
    unique_numbers = [input_numbers[0]]
    for number in input_numbers[1:]:
        if number != unique_numbers[-1]:
            unique_numbers.append(number)
    return unique_numbers