def find_closest_number():
    while True:
        try:
            value = float(input("Enter a decimal number: "))
            closest_value = round(value)
            if value != closest_value:
                print(f"The closest integer is {closest_value} for the input {value}.")
                return 0
            else:
                return closest_value
        except ValueError:
            print("Invalid input. Please enter a decimal number.")

closest_integer = find_closest_number()
print(closest_integer)