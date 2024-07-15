def find_zero(xs: list) -> float:
    a = xs[-1]
    b = xs[-2]
    return -b / a

print("Enter a list of numbers separated by spaces:")
xs = list(map(float, input().split()))
result = find_zero(xs)
print(result)