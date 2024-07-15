import re

def fix_spaces(text: str) -> str:
    text = re.sub(r'\s+', '_', text)
    text = re.sub(r'\-{2,}', '-', text)
    return text

input_text = input("Enter the text: ").strip()
result = fix_spaces(input_text)
print(result)