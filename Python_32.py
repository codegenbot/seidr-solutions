def find_zero(xs):
    if len(xs) == 0:
        raise ValueError("Input list must not be empty.")
    for i in range(len(xs)):
        if xs[i] == 0:
            continue
        x = -xs[i - 1] / (xs[i] * xs[i])
        return round(x, 2)


# Read input from user and store it in a variable called 'xs'
xs = list(map(int, input().split()))

# Pass the input to your function
result = find_zero(xs)

# Print the result
print(result)