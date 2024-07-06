
def fix_spaces(text):
    import re
    if not text:
        return ""
    text = re.sub(r"\s+", "_", text)
    return text.replace(" ", "")

user_input = input()
result = fix_spaces(user_input)
print(result)