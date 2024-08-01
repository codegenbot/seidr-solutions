def find_zero(xs: list):
    n = len(xs) - 1
    a, b = xs[-1], xs[-2]
    return -a / b


# Input prompt
input_list = input("Enter a list of numbers separated by space: ").split()
input_list = [float(num) for num in input_list]

# Call the function with input_list and print the result
result = find_zero(input_list)
print(result)