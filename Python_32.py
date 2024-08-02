def find_zero(xs: list):
    if len(xs) < 4:
        return None
    a = xs[0]
    b = xs[1]
    c = xs[2]
    d = xs[3]
    x = (a * d - b * c) / (b * b - a * c)
    return x

user_input = input("Enter a list of floating-point numbers separated by spaces: ")
user_list = [float(x) for x in user_input.split()]
print(find_zero(user_list))