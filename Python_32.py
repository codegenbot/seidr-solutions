def find_zero(xs: list):
    n = len(xs)
    if n < 4 or n % 2 != 0:
        return None
    a = xs[0]
    b = xs[1]
    c = xs[2]
    d = xs[3]
    x = (a * d - b * c) / (b * b - a * c)
    return x

input_list = input("Enter a list of floating-point numbers: ")
input_list = list(map(float, input_list.split()))
result = find_zero(input_list)
print(result)