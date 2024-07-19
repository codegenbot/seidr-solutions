paren_string = input("Please enter a string of parentheses only: ").strip()
# Ensure the input only contains parentheses
if set(paren_string) != {'(', ')'}:
    print("Input should contain only '(' and ')' characters.")
    # Handle invalid input accordingly
else:
    # Continue with the rest of the code logic