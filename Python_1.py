paren_string = input("Enter the string with parenthesis: ").strip()
if set(paren_string) - set("()"):
    print("Invalid input: Input string must contain only parentheses")
else:
    output = separate_paren_groups(paren_string)
    print(output)