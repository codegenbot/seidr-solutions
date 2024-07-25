def calculate_sum():
    while True:
        try:
            choice = input("Do you want to calculate sum (yes/no/exit)? ")
            if choice.lower() == 'exit':
                break
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
            print(f"Sum is: {x + y}")
        except ValueError:
            print("Invalid input. Please enter valid integers.")

calculate_sum()