import re

def process_text(text):
    text = re.sub(r'\s{2,}', '_', text)
    text = "_".join(text.split())
    return text

try:
    while True:
        try:
            input_text = input()
        except EOFError:
            break
        result = process_text(input_text)
        print(result)
except KeyboardInterrupt:
    print("Error reading input.")