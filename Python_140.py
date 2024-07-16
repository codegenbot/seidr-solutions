import re
import sys

def process_text(text):
    text = re.sub(r'\s{2,}', '_', text)
    text = "_".join(text.split())
    return text

for line in sys.stdin:
    result = process_text(line.strip())
    print(result)