```
user_input = input("Enter the coefficients (space separated numbers): ")
try:
    xs = [int(x) for x in user_input.split()]
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    print(find_zero(xs))
except ValueError as e:
    print(f"Invalid input: {e}")