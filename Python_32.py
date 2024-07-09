def find_zero(xs: list):
    try:
        n = len(xs)
        if n < 2:
            return "Input list should have at least 2 elements"
        a = xs[-1]
        b = xs[-2]
        return -b / a
    except:
        return "Please provide a valid input format"

# Read input from user
try:
    xs = list(map(float, input().split()))
except ValueError:
    print("Please provide a valid input format")
    exit()

# Call the function with user input
result = find_zero(xs)
print(result)