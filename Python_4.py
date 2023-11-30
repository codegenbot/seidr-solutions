numbers = input("Enter numbers separated by space: ")
if not numbers.replace(" ", "").isnumeric():
    print("Invalid input. Please enter only numbers separated by space.")
else:
    numbers = list(map(int, numbers.split()))
    # Rest of the code