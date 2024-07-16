import re

def process_text(text):
    text = re.sub(r'\s{2,}', '_', text)
    text = "_".join(text.split())
    return text

while True:
    try:
        input_text = input()
        result = process_text(input_text)
        print(result)
    except EOFError:
        pass