import re

def process_text(text):
    text = re.sub(r'\s{2,}', '_', text)
    text = "_".join(text.split())
    return text

try:
    input_text = input().strip()
except EOFError:
    input_text = ""  # Default value if no input received

result = process_text(input_text)
print(result)