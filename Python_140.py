import re


def fix_spaces(input_text):
    print(re.sub(r"\s+", "-", input_text))


input_text = input("Enter a string: ")
fix_spaces(input_text)