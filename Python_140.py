def fix_spaces(text):
    import re

    text = re.sub(r"\s+", " ", text)
    return text.strip()


user_input = input()
result = fix_spaces(user_input)
print(result)