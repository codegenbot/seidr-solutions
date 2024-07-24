
def find_zero(xs: list):
    n = len(xs) - 1
    return -xs[0] / xs[n - 1] if n == 2 else 1.0

# Read input as string and split
input_list = input().split()

# Convert elements to integers
input_list = [int(x) for x in input_list]

# Call the function with the input list
result = find_zero(input_list)
print(result)