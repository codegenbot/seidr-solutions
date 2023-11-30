numbers = input()
if not all(num.isdigit() for num in numbers.strip().split()):
    print("Invalid input. Please enter numbers separated by space.")
else:
    numbers = list(map(int, numbers.split()))
    # Rest of the code