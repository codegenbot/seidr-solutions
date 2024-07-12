def find_closest_number():
    while True:
        try:
            value = float(input("Enter a decimal number: "))
            closest_value = round(value)
            if value != closest_value:
                continue
            return closest_value
        except ValueError:
            print("Invalid input. Please enter a decimal number.")