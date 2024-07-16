import re

def process_text(text):
    text = re.sub(r'\s{2,}', '_', text)
    text = "_".join(text.split())
    return text

try:
    input_text = raw_input("Enter text: ").strip()
    result = process_text(input_text)
    print(result)
except (KeyboardInterrupt, EOFError):
    print("Error reading input.")