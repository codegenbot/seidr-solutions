def separate_paren_groups(paren_string: str) -> list:
    result = []
    level = 0
    current_group = ""

    for char in paren_string:
        if char == "(":
            level += 1
            current_group += char
        elif char == ")":
            if level == 0:
                return "Invalid input: Unmatched parentheses"
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

    if level != 0:
        return "Invalid input: Unmatched parentheses"

    return result

paren_string = input("Enter a string with parentheses: ")
output = separate_paren_groups(paren_string)
print(output)