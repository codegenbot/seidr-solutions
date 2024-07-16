import re

def process_text():
    text = input().strip()
    text = re.sub(r'\s{2,}', '_', text)
    text = "_".join(text.split())
    return text

result = process_text()
print(result)