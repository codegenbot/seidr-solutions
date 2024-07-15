import re

def fix_spaces(text: str) -> str:
    text = re.sub(r'\s+', '_', text)
    text = re.sub(r'-+', '-', text)
    return text

# Read input from user
input_text = input()
# Call the fix_spaces function and output the result
print(fix_spaces(input_text))