import re
input_string = input("Enter car race collision: ").strip().lower()
def check():
    if re.search(r"car\s+race\s+collision", input_string):
        print("Collision detected")
    else:
        print("Invalid input. Please enter 'car race collision'.")

check()