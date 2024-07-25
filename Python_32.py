def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a

# Read input from user
numbers = input("Enter space-separated numbers: ")
result = find_zero(list(map(float, numbers.split())))
print(result)