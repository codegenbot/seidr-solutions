def find_zero(xs: list) -> float:
    a = xs[0]
    b = xs[1]
    if a == 0:
        return "undefined"
    return -b / a


user_input = input("Enter two numbers separated by a space (e.g., 2 3): ").strip()
xs = list(map(float, user_input.split()))
if len(xs) < 2:
    print("Please input two numbers separated by a space.")
else:
    result = find_zero(xs)
    print(result)