```
def below_zero():
    operations = []
    while True:
        try:
            operation = int(input("Enter a number (or 'stop' to finish): "))
            if str(operation) == 'stop':
                break
            operations.append(operation)
        except ValueError:
            print("Invalid input. Please enter a number.")
    return sum(operations) < 0