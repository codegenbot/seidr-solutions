def find_zero(xs: list):
    assert len(xs) % 2 == 0
    max_coeff = max(xs, key=abs)
    if max_coeff == 0:
        return 0
    return -1 / max_coeff


# Read input from the user
input_list = list(map(int, input().split()))

# Call the function with the input list
output = find_zero(input_list)
print(output)