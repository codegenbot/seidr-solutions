import re
input_string = input("Enter car race collision: ").strip().lower()

def check(input_str):
    if re.search(r/car race collision/, input_str):
        print("Collision detected")
    else:
        print("Invalid input. Please enter 'car race collision'.")

check(input_string)