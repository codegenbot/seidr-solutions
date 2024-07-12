import sys

def separate_paren_groups():
    paren_string = sys.stdin.readlines()
    separated_groups = []
    current_group = ""
    open_count = 0

    for line in paren_string:
        for char in line.strip():
            if char == '(':
                open_count += 1
            elif char == ')':
                open_count -= 1

            current_group += char

            if open_count == 0:
                separated_groups.append(current_group)
                current_group = ""

    return separated_groups

print(separate_paren_groups())