def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    if n == 1:
        return -a / b
    return -a / b


# Read space-separated numbers from user input
input_list = list(map(float, input().split()))

# Call the function with the input list and print the result
print(find_zero(input_list))