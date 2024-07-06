import re


def fix_spaces(input_text):
    # Use print instead of return to display the corrected output
    print(re.sub(r"\s+", "-", input_text))


# Read input from user and pass it to the function
input_text = input("Enter a string: ")
fix_spaces(input_text)