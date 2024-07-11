```
def calculate_total_amount():
    total_amount = 0
    while True:
        try:
            amount = float(input("Enter an amount (or 'q' to quit): "))
            if amount == 'q':
                break
            total_amount += amount
        except ValueError:
            print("Invalid input. Please enter a number or 'q' to quit.")
    return total_amount