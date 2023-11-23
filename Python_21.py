# Take input from user
input_numbers = list(map(float, input("Enter the numbers (separated by space): ").split()))

# Call the function and print the output
result = rescale_to_unit(input_numbers)
print(result)