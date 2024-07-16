try:
    input_numbers = list(map(int, input("Enter space-separated numbers: ").split()))
except ValueError:
    print("Invalid input. Please enter space-separated numbers only.")
else:
    if not input_numbers:
        print("Invalid input. Please enter at least one number.")
    else:
        # Continue with the rest of the code