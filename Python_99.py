```
import math


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


if __name__ == "__main__":
    while True:
        closest_integer, difference = find_closest_number()
        print("Closest integer: {}, Difference: {}".format(closest_integer, difference))
        response = input("Do you want to continue? (yes/no): ")
        if response.lower() != "yes":
            break