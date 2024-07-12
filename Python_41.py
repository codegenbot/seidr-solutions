import re

input_string = input("Enter car race collision: ").strip().lower()

def check(input_string):
    if "car" in input_string and "race" in input_string and "collision" in input_string:
        print("Collision detected")
    else:
        print("Invalid input. Please enter 'car race collision'.")

check(input_string)