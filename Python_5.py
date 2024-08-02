def process_numbers(numbers, delimiter):
    return [item for sublist in [[num, delimiter] for num in numbers[:-1]] + [numbers[-1]] for item in sublist]

numbers = [1, 2, 3, 4, 5]
delimiter = ","
output = process_numbers(numbers, delimiter)
print(output)