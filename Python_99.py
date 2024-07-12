```
def find_closest_number():
    while True:
        try:
            value = float(input("Enter a decimal number: "))
            closest_integer = round(value)
            if value != closest_integer:
                diff = abs(value - closest_integer)
                print(f"Closest integer: {closest_integer}, Difference: {diff:.2f}")
            else:
                print(f"Closest integer: {closest_integer}, Difference: 0")
        except ValueError:
            print("Invalid input. Please enter a decimal number.")

while True:
    find_closest_number()
    response = input("Do you want to continue? (yes/no): ")
    result = response.lower()  
    if response.lower() != "yes":
        break

print("Program ended.")