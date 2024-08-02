def find_zero(xs: list):
    if len(xs) < 4:
        return None
    a = xs[0]
    b = xs[1]
    c = xs[2]
    d = xs[3]
    x = (a * d - b * c) / (b * b - a * c)
    return x

input_list = list(map(float, input("Enter a list of floating-point numbers separated by space: ").split()))
result = find_zero(input_list)
print(result)