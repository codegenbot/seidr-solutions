import re

def process_text(text):
    text = re.sub(r'\s{2,}', '_', text)
    text = "_".join(text.split())
    return text

try:
    input_text = input("Enter text: ")
    if input_text[0] == '"' and input_text[-1] == '"':
        input_text = input_text[1:-1]
        result = process_text(input_text)
        print(result)
    else:
        print("Error: Please provide input text enclosed in quotation marks.")
except EOFError:
    print("Error reading input. Please provide valid input.")