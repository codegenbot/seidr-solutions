def find_closest_number():
    while True:
        try:
            value = float(input("Enter a decimal number: "))
            break
        except ValueError:
            print("Invalid input. Please enter a decimal number.")

    closest_value = round(value)
    return closest_value


while True:
    result = find_closest_number()
    choice = input("Do you want to find the closest integer again? (yes/no): ")
    if choice.lower() != "yes":
        break