import re

paren_string = raw_input("Enter the string of parentheses: ")
if re.match("^[()]*$", paren_string) is None:
    raise ValueError("Invalid input: Please enter only parentheses")

separated_groups = []
current_group = ""
open_count = 0

for char in paren_string:
    if char == "(":
        open_count += 1
    elif char == ")":
        open_count -= 1

    current_group += char

    if open_count < 0:
        raise ValueError("Invalid input: Unbalanced parentheses")

    if open_count == 0:
        separated_groups.append(current_group)
        current_group = ""

separated_groups