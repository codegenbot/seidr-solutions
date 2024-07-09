# Read input from the user
numbers = [int(num) for num in input("Enter numbers separated by space: ").split()]

# Call the sum_product function with the input
result_sum, result_product = sum_product(numbers)

# Print the results
print("Sum:", result_sum)
print("Product:", result_product)