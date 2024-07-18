def find_zero(xs: list):
    x = -xs[0] / xs[-1]
    return x

# Get input from user
numbers = [int(num) for num in input().split()]

result = find_zero(numbers)
print(result)