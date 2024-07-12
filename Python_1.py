try:
    paren_string = raw_input("Enter the parentheses string: ").strip()
    print(separate_parentheses(paren_string))
except ValueError as e:
    print(e)
except EOFError:
    print("Error: End of file reached unexpectedly")