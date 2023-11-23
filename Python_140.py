def fix_spaces(text):
    return text.replace(' ', '_')

text = input().rstrip()
result = fix_spaces(text)
print(result)