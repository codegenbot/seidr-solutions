def fix_spaces(text):
    return text.replace(' ', '_')

text = input().strip()
result = fix_spaces(text)
print(result)