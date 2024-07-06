def find_zero(xs):
    if len(xs) % 2 == 1 or xs[-1] != 0:
        raise ValueError("Invalid input")
    for i in range(len(xs) // 2):
        x = -xs[i] / xs[i + 1]
        if poly(xs, x) < 1e-6:
            return round(x, 2)
    raise ValueError("No solution found")


# Prompt user for input
print("Enter a list of integers, separated by spaces:")
input_str = input()

# Parse the input into a list of integers
xs = [int(x) for x in input_str.split()]

# Call the find_zero function with the input list
result = find_zero(xs)

print("The solution is:", result)