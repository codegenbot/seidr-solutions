try:
    inputs = list(map(int, input("Enter space-separated integers: ").strip().split()))
    if len(inputs) < 2:
        raise ValueError
except ValueError:
    print("Invalid input. Please enter at least two space-separated integers.")