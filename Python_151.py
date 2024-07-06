# Prompt user for input
input_string = input(
    "Enter numbers separated by spaces (negative numbers and floating-point numbers are allowed): "
)
lst = [float(x) for x in input_string.split()]

# Call function with input
print(double_the_difference(lst))