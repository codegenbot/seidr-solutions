
def fix_spaces(text):
    import re
    text = re.sub(r"\s+", "_", text)
    return text.replace(" ", "")

user_input = sys.stdin.read()
result = fix_spaces(user_input)
print(result)