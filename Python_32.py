def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    a = xs[-1]
    b = xs[-2]
    return -a / b

# Read input from the user
user_input = input("Enter a list of numbers separated by spaces: ")
numbers = list(map(float, user_input.split()))

# Call the function with the input numbers
result = find_zero(numbers)
print(result)