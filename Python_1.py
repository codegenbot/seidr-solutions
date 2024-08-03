from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    count = 0
    for char in paren_string:
        temp += char
        if char == "(":
            count += 1
        elif char == ")":
            count -= 1
            if count == 0:
                result.append(temp)
                temp = ""
    return result


# Get user input
paren_string = input("Enter a string of parentheses: ")

# Call the function with user input
output = separate_paren_groups(paren_string)

# Print the output
print(output)