```
import re

input_string = input("Enter car race collision: ").strip().lower()

def check(input_string):
    conditions = ["car", "race", "collision"]
    for condition in conditions:
        if condition not in input_string:
            print("Invalid input. Please enter 'car race collision'.")
            return
    print("Collision detected")

check(input_string)