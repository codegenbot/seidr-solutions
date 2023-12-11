def fix_spaces(text):
    import re
    return re.sub(r"\s+", "_", text, count=1)

# Prompt user for input and store it in a variable
user_input = input("Enter some text: ")

# Call the fix_spaces function with the user's input as an argument
fixed_text = fix_spaces(user_input)

print(f"Fixed text: {fixed_text}")