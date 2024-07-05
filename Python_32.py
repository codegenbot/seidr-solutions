def find_zero(xs: list[int]) -> float:
    if len(xs) == 1:
        return 0.0
    for i in range(len(xs)):
        if xs[i] == 0:
            continue
        x = -xs[i-1] / (xs[i] * xs[i])
        return round(x, 2)

# Add this line to read input from the user
xs = list(map(int, input("Enter a list of integers separated by spaces: ").split()))

# Call the find_zero function with the input list
result = find_zero(xs)
print(f"The zero of the polynomial is {result}")