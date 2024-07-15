def find_zero(xs: list) -> float:
    a = xs[0]
    b = xs[1]
    if a == 0:
        return "undefined"
    return -b / a

user_input = input("Enter two numbers separated by a space: ")
xs = list(map(float, user_input.strip().split()))
result = find_zero(xs)
print(result)