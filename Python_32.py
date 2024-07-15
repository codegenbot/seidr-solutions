def find_zero(xs: list) -> float:
    a = xs[0]
    b = xs[1]
    if a == 0:
        return "undefined"
    return -b / a

user_input = input("Enter two numbers separated by a space: ").strip()
while len(user_input.split()) != 2:
    user_input = input("Please enter exactly two numbers separated by a space: ").strip()
xs = list(map(float, user_input.split()))
result = find_zero(xs)
print(result)