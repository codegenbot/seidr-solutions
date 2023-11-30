numbers = input("Enter numbers separated by space: ")
if not numbers.replace(" ", "").isdigit():
    print("Invalid input. Please enter only numbers separated by space.")
else:
    numbers = list(map(int, numbers.split()))
    # Rest of the code