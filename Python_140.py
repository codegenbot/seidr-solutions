import re

def process_text(text):
    text = re.sub(r'\s{2,}', '_', text)
    text = "_".join(text.split())
    return text

input_text = input("Enter text: ")

result = process_text(input_text)
print(result)