def generate_list_with_delimeter(numbers, delimeter):
    result = []
    for num in numbers[:-1]:
        result.extend([num, delimeter])
    if numbers:
        result.append(numbers[-1])
    return result

# Example usage
input_numbers = [1, 2, 3, 4, 5]
input_delimeter = '-'
output_list = generate_list_with_delimeter(input_numbers, input_delimeter)
print(output_list)