```
def find_closest_number():
    while True:
        try:
            value = float(input("Enter a decimal number: "))
            break
        except ValueError:
            print("Invalid input. Please enter a decimal number.")
    if value >= 0:
        closest_value = round(value)
    else:
        closest_value = -round(-value)
    return closest_value

print(find_closest_number())