def find_zero(xs: list):
    max_coeff = max(xs, key=abs)
    if len(xs) % 2 == 0 and max_coeff != 0:
        return xs[0] / xs[1]


# Read input from user
xs = list(map(int, input().split()))

# Output the result
print(find_zero(xs))