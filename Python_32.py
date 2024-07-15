def find_zero(xs: list) -> float:
    a = xs[0]
    b = xs[1]
    return -b / a


xs = list(map(float, input("Enter values of a and b separated by space: ").split()))
result = find_zero(xs)
print(result)