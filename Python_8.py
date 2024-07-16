try:
    input_numbers = list(map(int, input().strip().split()))
    if not input_numbers:
        raise ValueError("Empty input. Please enter at least one number.")
except ValueError as e:
    print(e)