import re


def fix_spaces(text):
    # Replace multiple spaces with single underscore
    text = re.sub(r"\s+", "_", text)

    # Remove all remaining spaces
    return text.replace(" ", "")


# Read input from user
text = input()

# Call the function to fix spaces
fixed_text = fix_spaces(text)

print(fixed_text)