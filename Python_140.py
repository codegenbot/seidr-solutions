import re

def process_text(text):
    text = re.sub(r'\s{2,}', '_', text)
    text = "_".join(text.split())
    return text

try:
    input_text = input().strip()
    result = process_text(input_text)
    print(result)
except EOFError:
    print("Error reading input. Please provide valid input.")