```
def fix_spaces(text):
    text = text.replace(" ", "_")
    while "__" in text:
        text = text.replace("__", "_-")
    return text

text = input("Enter your text: ").strip()
print(fix_spaces(text))