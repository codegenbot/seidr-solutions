numbers = input("Enter numbers separated by space: ")
if not numbers.strip().isdigit():
    print("Invalid input. Please enter numbers separated by space.")
else:
    numbers = list(map(int, numbers.split()))
    # Rest of the code