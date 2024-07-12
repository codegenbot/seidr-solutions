```python
import re

input_string = input("Enter car race collision: ").strip().lower()

def check(input_string):
    pattern = r"\b(car\b\s+race\s+collision)\b"
    if re.search(pattern, input_string):
        print("Collision detected")
    else:
        print("Invalid input. Please enter 'car race collision'.")

check(input_string)