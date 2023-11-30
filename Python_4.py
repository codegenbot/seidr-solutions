numbers = input().split()
if not all(num.isdigit() for num in numbers):
    print("Invalid input. Please enter numbers separated by space.")
else:
    numbers = list(map(int, numbers))
    # Rest of the code