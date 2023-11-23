def fix_spaces(text):
    return text.replace(' ', '_')

result = fix_spaces(input().strip())
print(result)