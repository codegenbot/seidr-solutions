import sys

def separate_paren_groups(paren_string: str) -> list:
    result = []
    level = 0
    current_group = ""

    for char in paren_string:
        if char == "(":
            level += 1
            current_group += char
        elif char == ")":
            level -= 1
            if level == 0:
                result.append(current_group + char)
                current_group = ""
            else:
                current_group += char
        else:
            if level == 0:
                result.append(char)
            else:
                current_group += char

    return result

if len(sys.argv) > 1:
    paren_string = sys.argv[1]
    output = separate_paren_groups(paren_string)
    print(output)
else:
    print("Please provide a string with parentheses as a command line argument.")