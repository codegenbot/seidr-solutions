def find_zero(xs):
    n = len(xs)
    total_sum = sum(xs)
    if total_sum % 2 != 0:
        return 0
    else:
        zero_combinations = 0
        for i in range(1 << (n // 2)):
            subset_sum = sum(x * (i & (1 << j)) for j, x in enumerate(reversed(xs)))
            if subset_sum == 0:
                zero_combinations += 1
        return zero_combinations

user_input = input("Enter the coefficients (space separated numbers): ")
try:
    xs = [int(x) for x in user_input.split()]
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    print(find_zero(xs))
except ValueError as e:
    print(f"Invalid input: {e}")