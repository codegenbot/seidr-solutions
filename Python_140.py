import sys
import re

def process_text(text):
    text = re.sub(r'\s{2,}', '_', text)
    text = "_".join(text.split())
    return text

while True:
    try:
        input_text = sys.stdin.readline().rstrip()
        result = process_text(input_text)
        print(result)
        break
    except KeyboardInterrupt:
        print("Error reading input. Please provide valid input.")