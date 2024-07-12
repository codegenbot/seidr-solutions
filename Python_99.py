def find_closest_number():
    while True:
        try:
            value = float(input("Enter a decimal number: "))
            closest_value = round(value)
            if value != closest_value:
                diff = abs(value - closest_value)
                response = input("Do you want to continue? (yes/no): ")
                if response.lower() != "yes":
                    return
                return closest_value, diff
            else:
                response = input("Do you want to continue? (yes/no): ")
                if response.lower() != "yes":
                    return
                return closest_value, 0
        except ValueError:
            print("Invalid input. Please enter a decimal number.")