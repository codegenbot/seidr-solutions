try:
    inputs = list(map(int, input("Please enter 10 integers separated by spaces: ").strip().split()))
    if len(inputs) != 10:
        raise ValueError("Please provide exactly 10 integers.")
except ValueError as ve:
    print(ve)