def find_closest_number():
    while True:
        try:
            value = float(input("Enter a decimal number: "))
            closest_value = round(value)
            if value != closest_value:
                diff = abs(value - closest_value)
                return closest_value, diff
            else:
                return closest_value, 0
        except ValueError:
            print("Invalid input. Please enter a decimal number.")


closest_integer, difference = find_closest_number()
print(f"Closest integer: {closest_integer}, Difference: {difference}")