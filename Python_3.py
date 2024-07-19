operations = []
for i in range(3):
    try:
        operation = int(input(f"Enter operation {i+1}: "))
        operations.append(operation)
    except (ValueError, IOError):
        print("Please enter valid input.")