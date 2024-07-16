paren_string = input()
if not all(char in "() " for char in paren_string):
    print("Invalid input format. Please provide a string with only parentheses.")
else:
    result = separate_paren_groups(paren_string)
    print(result)