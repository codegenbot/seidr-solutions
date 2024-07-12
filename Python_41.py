input_string = input("Enter 'car race collision': ").strip().lower()
def check():
    if "car race collision" in input_string:
        print("Collision detected")
    else:
        print("Invalid input. Please enter 'car race collision'.")

check()