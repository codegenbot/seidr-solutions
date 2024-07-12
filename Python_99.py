```Python
def find_closest_number():
    while True:
        try:
            value = float(input("Enter a decimal number: "))
            break
        except ValueError:
            print("Invalid input. Please enter a decimal number.")
    
    closest_value = int(value) if abs(int(value) - value) < 0.5 else round(value)
    return closest_value

print(find_closest_number())