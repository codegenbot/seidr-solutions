def find_zero(xs: list):
    assert len(xs) % 2 == 0
    n = len(xs) - 1
    a = xs[0]
    b = xs[n]
    return -a / b

# Read input from user
input_list = list(map(int, input().split()))

# Call the function with the given input list
result = find_zero(input_list)
print(result)