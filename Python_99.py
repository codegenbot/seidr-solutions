```
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

def check_closest(closest_integer):
    if closest_integer % 2 == 0:
        print(f"{closest_integer} is an even number.")
    else:
        print(f"{closest_integer} is an odd number.")

find_closest_number()
check_closest(find_closest_number())