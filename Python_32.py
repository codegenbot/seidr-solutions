def find_zero(xs: list):
    n = len(xs) // 2
    a, b = xs[0], xs[1]
    return -b / a

xs = list(map(float, input("Enter a list of numbers separated by spaces: ").split()))
result = find_zero(xs)
print(result)