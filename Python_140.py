```
import re

def fix_spaces(text):
    if not text or isinstance(text, (str, int)):
        return ""
    text = text.strip().replace("--", "-").replace("\n", "").replace(" ", "_")
    return re.sub(r'_{1,}', lambda m: f"_{m.group(0).strip('_')}", text)

text = input("Enter a string: ")
result = fix_spaces(text)
print(result)