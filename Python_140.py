```python
import re

def fix_spaces():
    text = input("Enter your text: ")
    text = " ".join(text.split())
    text = text.replace(" ", "_")
    text = re.sub(' +', '_', text)
    return text

print(fix_spaces())