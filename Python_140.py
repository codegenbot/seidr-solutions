```
def fix_spaces(text):
    text = text.strip().replace(" ", "_")
    while "--" in text or "---" in text or "----" in text:
        text = text.replace("--", "-")
        text = text.replace("---", "-")
        text = text.replace("----", "-")
    return text

print(check("   Exa 1 2 2 mple"))
def check(input_text):
    print(fix_spaces(input_text))