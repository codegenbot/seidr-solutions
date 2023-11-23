def fix_spaces():
    text = input().strip()
    return text.replace(' ', '_')

result = fix_spaces()
print(result)