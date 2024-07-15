def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char in "()":
            temp += char
        else:
            if temp:
                result.append(temp)
                temp = ""
    if temp:
        result.append(temp)
    return result

# Get the input from the user
paren_string = input("Enter the parentheses string: ")

# Call the function and print the result
print(separate_paren_groups(paren_string))