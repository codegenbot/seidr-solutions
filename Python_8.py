try:
    input_numbers = list(map(int, input("Enter space-separated numbers: ").split()))
    if len(input_numbers) == 0:
        raise ValueError
except ValueError:
    print("Invalid input. Please enter space-separated numbers only.")