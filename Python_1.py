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

paren_string = input("Enter a string with parentheses: ")
output = separate_paren_groups(paren_string)
print(output)