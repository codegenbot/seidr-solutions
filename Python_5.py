def process_numbers(numbers, delimeter):
    return (
        [item for sublist in [[num, delimeter] for num in numbers[:-1]] for item in sublist]
        + [numbers[-1]]
        if numbers
        else []
   )

input_numbers = [1, 2, 3, 4]
input_delimeter = ","
output = process_numbers(input_numbers, input_delimeter)
print(output)