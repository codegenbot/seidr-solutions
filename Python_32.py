def find_zero(xs: list):
    n = len(xs) // 2
    a, b = xs[0], xs[1]
    return -b / a


# Read a list of numbers from the user input
xs = list(map(float, input("Enter a list of numbers separated by spaces: ").split()))

# Call the find_zero function with the input list and print the result
result = find_zero(xs)
print(result)