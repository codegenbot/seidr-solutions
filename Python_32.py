try:
    numbers = list(map(int, input("Enter space-separated numbers: ").split()))
    if not numbers:
        raise ValueError("No input provided")
except ValueError as e:
    print(f"Invalid input: {e}")