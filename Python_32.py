def find_zero(xs: list):
    if len(xs) < 2:
        return "Input list must contain at least two integers"

    a, b = xs[0], xs[1]
    if a == 0:
        return "Cannot divide by zero"

    return -b / a

input_list = list(map(int, input("Enter list of integers separated by space: ").split()))
result = find_zero(input_list)
print(result)