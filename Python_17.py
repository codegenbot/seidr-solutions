try:
    inputs = list(map(int, input().strip().split()))
    if len(inputs) != 10:
        raise ValueError("Please provide exactly 10 integers.")
except ValueError as ve:
    print(ve)