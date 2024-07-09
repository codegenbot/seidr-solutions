def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]

    if n == 2:
        return -b / a
    else:
        return 1.0

# Input
input_list = list(map(float, input("Enter a list of numbers separated by spaces: ").split())

# Output
result = find_zero(input_list)
print(result)